#include "armstrong_numbers.h"
#include <stdbool.h>
#include <math.h>

bool is_armstrong_number(int candidate)
{
    int candidate_size = log10(candidate) + 1;
    int duplicate = candidate;
    int armstrong = 0;

    while (duplicate > 0)
    {
        armstrong += pow((duplicate % 10), candidate_size);
        duplicate /= 10;
    }
    return armstrong == candidate;
}
