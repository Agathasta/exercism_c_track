#include "grains.h"

#define NUM_SQUARES 64


uint64_t square(uint8_t index)
{
  if (index < 1 || index > NUM_SQUARES)
  {
    return 0;
  }
  // For unsigned lhs, the value of LHS << RHS is the value of LHS * 2^RHS
  return 1ull << (index - 1);
}

uint64_t total(void)
{
  // the maximum value of uint64_t is 2^64 − 1
  return UINT64_MAX;
}
