#ifndef __wasilibc___header_sys_resource_h
#define __wasilibc___header_sys_resource_h

#include <__struct_rusage.h>
#include <__struct_rlimit.h>

#define RUSAGE_SELF 1
#define RUSAGE_CHILDREN 2

#define RLIMIT_CPU     0
#define RLIMIT_FSIZE   1
#define RLIMIT_DATA    2
#define RLIMIT_STACK   3
#define RLIMIT_CORE    4

#ifdef __cplusplus
extern "C" {
#endif

int getrlimit (int resource, struct rlimit *);
int setrlimit (int resource, const struct rlimit *);

int getrusage(int who, struct rusage *usage);

int getpriority (int which, id_t who);
int setpriority (int which, id_t who, int prio);

#ifdef __cplusplus
}
#endif

#endif
