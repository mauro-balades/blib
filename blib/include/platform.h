
#ifndef __BLIB_PLATFORM_H__
#define __BLIB_PLATFORM_H__

// Check windows
#if _WIN32 || _WIN64
#if _WIN64
#define BLIB_TARGET_X64
#else
#define BLIB_TARGET_X32
#endif
#endif

// Check GCC
#if __GNUC__
#if __x86_64__ || __ppc64__
#define BLIB_TARGET_X64
#else
#define BLIB_TARGET_X32
#endif
#endif

#if !defined(BLIB_TARGET_X64) || !defined(BLIB_TARGET_X32)
#error Unknown target used to compile blib!
#endif

#endif // __BLIB_PLATFORM_H__
