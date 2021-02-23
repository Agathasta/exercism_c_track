#include "darts.h"
#include <math.h>

int score(coordinate_t position)
{
    float squared = pow(position.x, 2) + pow(position.y, 2);

    if (squared <=1) {
    	return 10;
    } else if (squared <=25) {
    	return 5;
    } else if (squared <=100) {
    	return 1;
    } else {
    	return 0;
    }
}
