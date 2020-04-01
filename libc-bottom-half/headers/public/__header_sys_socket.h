#ifndef __wasilibc___header_sys_socket_h
#define __wasilibc___header_sys_socket_h

#include <__struct_msghdr.h>
#include <__struct_sockaddr.h>
#include <__struct_sockaddr_storage.h>

#include <wasi/api.h>

#define SHUT_RD __WASI_SDFLAGS_RD
#define SHUT_WR __WASI_SDFLAGS_WR
#define SHUT_RDWR (SHUT_RD | SHUT_WR)

#define MSG_PEEK __WASI_RIFLAGS_RECV_PEEK
#define MSG_WAITALL __WASI_RIFLAGS_RECV_WAITALL
#define MSG_TRUNC __WASI_RIFLAGS_RECV_DATA_TRUNCATED

#define SOCK_DGRAM __WASI_FILETYPE_SOCKET_DGRAM
#define SOCK_STREAM __WASI_FILETYPE_SOCKET_STREAM

#define SOCK_NONBLOCK (0x00004000)
#define SOCK_CLOEXEC (0x00002000)

#define SOL_SOCKET 0x7fffffff

#define SO_TYPE 3

#define AF_UNSPEC 0
#define AF_INET 1
#define AF_INET6 2
#define AF_UNIX 3

#ifdef __faasm // Some simple Faasm networking

#ifndef SOCK_STREAM
#define SOCK_STREAM    1
#define SOCK_DGRAM     2
#endif

#define SOCK_RAW       3
#define SOCK_RDM       4
#define SOCK_SEQPACKET 5
#define SOCK_DCCP      6
#define SOCK_PACKET    10

#define PF_UNSPEC       0
#define PF_LOCAL        1
#define PF_UNIX         PF_LOCAL
#define PF_FILE         PF_LOCAL
#define PF_INET         2
#define PF_INET6        10
#define PF_PACKET       17

#define AF_UNSPEC       PF_UNSPEC
#define AF_LOCAL        PF_LOCAL
#define AF_UNIX         AF_LOCAL
#define AF_FILE         AF_LOCAL
#define AF_INET         PF_INET
#define AF_INET6        PF_INET6
#define AF_PACKET       PF_PACKET

#ifndef SO_DEBUG
#define SO_DEBUG        1
#define SO_REUSEADDR    2
#define SO_TYPE         3
#define SO_ERROR        4
#endif

#define SOMAXCONN       128


#endif // End Faasm networking

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif
