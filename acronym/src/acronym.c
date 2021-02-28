#include "acronym.h"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *abbreviate(const char *phrase)
{
  if (phrase == NULL || strcmp(phrase, "") == 0)
  {
    return NULL;
  }

  char *abreviation;
  
  abreviation = (char *) malloc(sizeof(char));
  
  abreviation[0] = phrase[0];
  int letter = 1;

  for (int i = 0, len = strlen(phrase) ; i < len ; i++)
  {
    if(phrase[i]==' ' || phrase[i]=='-' || phrase[i]=='_')
    {
      if (isalpha(phrase[i + 1]))
      {
        abreviation[letter] = toupper(phrase[i + 1]);
        letter++;
      }
    }
  }
  return abreviation;

}
