#include "darts.h"
#include <stdint.h>
#include <math.h>

uint16_t find_distance(uint8_t x,uint8_t y)
{
    uint16_t distance = sqrt(((x-0)^2)+((y-0)^2));
    return distance;
}

uint16_t score(uint16_t x, uint16_t y)
{
    
    if(find_distance(x,y) > 10){
        return 0;
    } else if(find_distance(x,y) == 10){
        return 1;
    } else if(find_distance(x,y) >= 5){
        return 5;
    } else if(find_distance(x,y) >=1){
        return 10;
    }
    return 0;
}

