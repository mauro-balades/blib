
#ifndef __BLIB_INTS_H__
#define __BLIB_INTS_H__

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;
typedef unsigned long long u128;

#ifndef BLIB_USE_S_INTS
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long s64;
typedef signed long long s128;
#else
typedef signed char i8;
typedef signed short i16;
typedef signed int i32;
typedef signed long i64;
typedef signed long long i128;

#endif // BLIB_USE_S_INTS

#ifdef BLIB_TARGET_X64
typedef signed long long int isize;
typedef unsigned long long int usize;
#else
typedef signed int isize;
typedef unsigned int usize;
#endif // BLIB_TARGET_X64

#endif // __BLIB_INTS_H__

