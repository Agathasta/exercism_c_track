// Solution using binary search.
// Adapted from https://www.geeksforgeeks.org/c-program-to-find-square-root-of-a-given-number/

#include "square_root.h"

unsigned int square_root(unsigned int radicand) {

  unsigned int lower_bound = 0;
  unsigned int upper_bound = radicand;
  
  // Only case where square root is bigger than the middle
  if (radicand == 1) {
    return radicand;
  }

  while (lower_bound <= upper_bound)  {

    unsigned int middle = (lower_bound + upper_bound) / 2;
      
    if (middle * middle == radicand)  {
      return middle;
    }
    else if (middle * middle > radicand) {
      upper_bound = middle--;
    }
    else {
      lower_bound = middle++;
    }
  }

  return -1;
}
