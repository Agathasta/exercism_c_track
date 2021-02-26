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
      int index = toupper(phrase[i]) - 'A';
      counter[index]++;

      if (counter[index] > 1)
      {
        return false;
      }
    }
  }
  return true;
}
