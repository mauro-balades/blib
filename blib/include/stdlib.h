
#ifndef __BLIB_STDLIB_H__
#define __BLIB_STDLIB_H__

#ifdef __cplusplus
#define BLIB_API extern "C"
#else
#define BLIB_API
#endif

#ifndef BLIB_FUNC_PREFIX
#define BLIB_FUNC_PREFIX bl_
#endif

#ifndef BLIB_FUNC
#define BLIB_FUNC(x) BLIB_FUNC_PREFIX##x
#endif

#include "ints.h"

#endif // __BLIB_STDLIB_H__
