#include "hamming.h"
#include <string.h>

long long compute(const char *lhs, const char *rhs)
{
  long long l_len = strlen(lhs);
  long long r_len = strlen(rhs);

  if (l_len != r_len)
  {
    return -1;
  }

  long long counter = 0;
  for (long long i = 0 ; i < l_len ; i++)
  {
    if (lhs[i] != rhs[i])
    {
      counter++;
    }
  }
  return counter;
}

// Followed a mentor's suggestion to change int for long long to
// represent the length of long strings (up to 9,223,372,036,854,775,807)
