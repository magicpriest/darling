#ifndef MACHOLOADER_H
#define MACHOLOADER_H
#include <vector>
#include <string>
#include <map>
#include <pair>
#include <stdint.h>
#include "arch.h"

class MachOLoader
{
#ifdef __x86_64__
public:
	typedef segment_command_64 Segment;
private:
	static inline const vector<Segment*>& getSegments(const MachO& mach) {
		return mach.segments64();
	}
#else
public:
	typedef segment_command Segment;
private:
	static inline const vector<Segment*>& getSegments(const MachO& mach) {
		return mach.segments();
	}
#endif

public:
	MachOLoader();
	
	// Maps module segments into the memory
	void loadSegments(const MachO& mach, intptr* slide, intptr* base);
	
	
	void doRebase(const MachO& mach, intptr slide);
	
	// Puts initializer functions of that module into the list of initializers to be run
	void loadInitFuncs(const MachO& mach, intptr slide);
	
	// Loads libraries this module depends on
	void loadDylibs(const MachO& mach);
	
	// Resolves all external symbols required by this module
	void doBind(const MachO& mach, intptr slide);
	
	// Creates a list of publicly visible functions in this module
	void loadExports(const MachO& mach, intptr base, Exports* exports);
	
	// Puts all symbol addresses into a global map
	void loadSymbols(const MachO& mach, intptr slide, intptr base);
	
	// Loads a Mach-O file and does all the processing
	void load(const MachO& mach, Exports* exports = 0);
	
	// Dyld data contains an accessor to internal dyld functionality. This stores the accessor pointer.
	void setupDyldData(const MachO& mach);
	
	// Runs initializer functions that have not been run yet
	void runPendingInitFuncs(int argc, char** argv, char** envp, char** apple);
	
	// Starts an application
	void run(MachO& mach, int argc, char** argv, char** envp);
	
	const Exports& getExports() const { return m_exports; }
private:
	// Jumps to the application entry
	void boot(uint64_t entry, int argc, char** argv, char** envp);
	
	void pushTrampolineCode(unsigned int c);
	void pushTrampolineCode64(uint64_t c);
	void pushTrampolineCode32(uint32_t c);
private:
	std::string m_trampoline;
	intptr m_last_addr;
	std::vector<uint64_t> m_init_funcs;
	Exports m_exports;
	std::vector<std::pair<std::string, char*> > m_seen_weak_binds;

};

#endif