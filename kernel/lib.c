#include "types.h"

#define RAND_MAX ((1U << 31) - 1)
uint32 randint(uint32 maxval)
{
  static uint64 x = 0;
  x = (x * 1103515245 + 12345) & RAND_MAX;
  return (x * maxval) >> 31;
}
#undef RAND_MAX
