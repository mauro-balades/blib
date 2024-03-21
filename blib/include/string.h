
#include "ints.h"
#include "stdlib.h"

#ifndef __BLIB_STRINGS_H__
#define __BLIB_STRINGS_H__

typedef struct BlString_T {
  char* buffer;
  usize size;
  usize capacity;
} BlString;

BLIB_API BlString BLIB_FUNC(strfrom)(char* data);
BLIB_API BlString BLIB_FUNC(strempty)();
BLIB_API BlString BLIB_FUNC(strcmp)(const BlString x, const BlString y);
BLIB_API BlString BLIB_FUNC(strconc)(const BlString x, const BlString y);

#endif // __BLIB_STRINGS_H__
