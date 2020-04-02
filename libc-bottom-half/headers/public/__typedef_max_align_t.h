#ifndef __wasilibc___typedef_max_align_t_h
#define __wasilibc___typedef_max_align_t_h

// Not sure why this is sometimes undefined. This definition is 
// copied from clang/10.0.0/include/__stddef_max_align_t.h
#ifndef __CLANG_MAX_ALIGN_T_DEFINED
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
#endif

#endif
