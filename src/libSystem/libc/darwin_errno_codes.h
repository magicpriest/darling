#ifndef DARWIN_ERRNO_CODES_H
#define DARWIN_ERRNO_CODES_H

/* $ awk '/#define[ \t]([A-Z]+)[\t ]+([0-9]+)/ { print "#define DARWIN_" $2 " " $3; }' < errno.h */

#define DARWIN_EPERM 1
#define DARWIN_ENOENT 2
#define DARWIN_ESRCH 3
#define DARWIN_EINTR 4
#define DARWIN_EIO 5
#define DARWIN_ENXIO 6
#define DARWIN_ENOEXEC 8
#define DARWIN_EBADF 9
#define DARWIN_ECHILD 10
#define DARWIN_EDEADLK 11
#define DARWIN_ENOMEM 12
#define DARWIN_EACCES 13
#define DARWIN_EFAULT 14
#define DARWIN_ENOTBLK 15
#define DARWIN_EBUSY 16
#define DARWIN_EEXIST 17
#define DARWIN_EXDEV 18
#define DARWIN_ENODEV 19
#define DARWIN_ENOTDIR 20
#define DARWIN_EISDIR 21
#define DARWIN_EINVAL 22
#define DARWIN_ENFILE 23
#define DARWIN_EMFILE 24
#define DARWIN_ENOTTY 25
#define DARWIN_ETXTBSY 26
#define DARWIN_EFBIG 27
#define DARWIN_ENOSPC 28
#define DARWIN_ESPIPE 29
#define DARWIN_EROFS 30
#define DARWIN_EMLINK 31
#define DARWIN_EPIPE 32
#define DARWIN_EDOM 33
#define DARWIN_ERANGE 34
#define DARWIN_EAGAIN 35
#define DARWIN_EINPROGRESS 36
#define DARWIN_EALREADY 37
#define DARWIN_ENOTSOCK 38
#define DARWIN_EDESTADDRREQ 39
#define DARWIN_EMSGSIZE 40
#define DARWIN_EPROTOTYPE 41
#define DARWIN_ENOPROTOOPT 42
#define DARWIN_EPROTONOSUPPORT 43
#define DARWIN_ESOCKTNOSUPPORT 44
#define DARWIN_ENOTSUP 45
#define DARWIN_EPFNOSUPPORT 46
#define DARWIN_EAFNOSUPPORT 47
#define DARWIN_EADDRINUSE 48
#define DARWIN_EADDRNOTAVAIL 49
#define DARWIN_ENETDOWN 50
#define DARWIN_ENETUNREACH 51
#define DARWIN_ENETRESET 52
#define DARWIN_ECONNABORTED 53
#define DARWIN_ECONNRESET 54
#define DARWIN_ENOBUFS 55
#define DARWIN_EISCONN 56
#define DARWIN_ENOTCONN 57
#define DARWIN_ESHUTDOWN 58
#define DARWIN_ETOOMANYREFS 59
#define DARWIN_ETIMEDOUT 60
#define DARWIN_ECONNREFUSED 61
#define DARWIN_ELOOP 62
#define DARWIN_ENAMETOOLONG 63
#define DARWIN_EHOSTDOWN 64
#define DARWIN_EHOSTUNREACH 65
#define DARWIN_ENOTEMPTY 66
#define _DARWIN_EPROCLIM 67
#define DARWIN_EUSERS 68
#define DARWIN_EDQUOT 69
#define DARWIN_ESTALE 70
#define DARWIN_EREMOTE 71
#define _DARWIN_EBADRPC 72
#define _DARWIN_ERPCMISMATCH 73
#define _DARWIN_EPROGUNAVAIL 74
#define _DARWIN_EPROGMISMATCH 75
#define _DARWIN_EPROCUNAVAIL 76
#define DARWIN_ENOLCK 77
#define DARWIN_ENOSYS 78
#define _DARWIN_EFTYPE 79
#define _DARWIN_EAUTH 80
#define _DARWIN_ENEEDAUTH 81
#define _DARWIN_EPWROFF 82
#define _DARWIN_EDEVERR 83
#define DARWIN_EOVERFLOW 84
#define _DARWIN_EBADEXEC 85
#define _DARWIN_EBADARCH 86
#define _DARWIN_ESHLIBVERS 87
#define _DARWIN_EBADMACHO 88
#define DARWIN_ECANCELED 89
#define DARWIN_EIDRM 90
#define DARWIN_ENOMSG 91
#define DARWIN_EILSEQ 92
#define _DARWIN_ENOATTR 93
#define DARWIN_EBADMSG 94
#define DARWIN_EMULTIHOP 95
#define DARWIN_ENODATA 96
#define DARWIN_ENOLINK 97
#define DARWIN_ENOSR 98
#define DARWIN_ENOSTR 99
#define DARWIN_EPROTO 100
#define DARWIN_ETIME 101
#define DARWIN_EOPNOTSUPP 102
#define _DARWIN_ENOPOLICY 103
#define DARWIN_ENOTRECOVERABLE 104
#define DARWIN_EOWNERDEAD 105
#define _DARWIN_EQFULL 106
#define _DARWIN_ELAST 106
#define _DARWIN_ECVCERORR 256
#define _DARWIN_ECVPERORR 512

#endif
