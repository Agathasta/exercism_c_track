#include "grains.h"
#include <math.h>

uint64_t square(uint8_t index)
{
  if (index < 1 || index > NUM_SQUARES)
  {
    return 0;
  }
  return pow(2, index - 1);
}

uint64_t total(void)
{
  // the maximum value of uint64_t is 2^64 − 1
  return UINT64_MAX;
}
