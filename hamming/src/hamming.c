#include "hamming.h"
#include "string.h"

int compute(const char *lhs, const char *rhs)
{
  int l_len = strlen(lhs);
  int r_len = strlen(rhs);

  if (l_len != r_len)
  {
    return -1;
  }

  int counter = 0;
  for (int i = 0 ; i < l_len ; i++)
  {
    if (lhs[i] != rhs[i])
    {
      counter++;
    }
  }
  return counter;
}
