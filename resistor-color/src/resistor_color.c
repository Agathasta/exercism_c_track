#include "resistor_color.h"
#include <stdio.h>

int color_code(resistor_band_t color)
{
    return color;
}

resistor_band_t *colors(void)
{
    static resistor_band_t rings[10];

    for(int i = 0 ; i < (int)(sizeof(rings)/sizeof(rings[0])) ; i++)
    {
        rings[i] = i;
    }

    return rings;
}
