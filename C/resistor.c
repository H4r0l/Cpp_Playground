#include "resistor_color.h"
#include <stdio.h>

unsigned int color_code(int code)
{
    if (code < 0 || code > 9) {
        fprintf(stderr, "Error: Invalid color code %d\n", code);
        return -1;  // Error value, out of range
    }
    return code;
}

const resistor_band_t resistor_colors[] = {
    BLACK, BROWN, RED, ORANGE, YELLOW,
    GREEN, BLUE, VIOLET, GREY, WHITE
};

const resistor_band_t* colors(void) {
    return resistor_colors;
}
