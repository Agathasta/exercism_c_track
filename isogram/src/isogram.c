#include "isogram.h"

#include <string.h>
#include <ctype.h>

bool is_isogram(const char* phrase)
{
  if (phrase == NULL)
  {
    return false;
  }

  int counter[26] = { 0 };

  for (int i = 0, l = strlen(phrase) ; i < l ; i++)
  {
    if (isalpha(phrase[i]))
    {
      counter[toupper(phrase[i]) - 65]++;
      if (counter[toupper(phrase[i]) - 65] > 1)
      {
        return false;
      }
    }
  }
  return true;
}
