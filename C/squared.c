#include "grains.h"

uint64_t square(uint8_t index)
{
    if(index == 0){return 0;}
    uint64_t value = 1;
    // We multiply value by 2 (which is equivalent to doubling the grains) 
    // index-1 times to calculate the grains on the given square.
    for(int i = 1; i < index; i++){
        value *= 2;
    }
    return value;
}

uint64_t total(void)
{
    uint64_t res = 0;
    // We sum the grains on each square, from square 1 to square 64.
    for(int i = 1; i <= 64; i++){
        res += square(i);
    }
    return res;
}
