#include "darts.h"
#include <stdint.h>
#include <math.h>

uint16_t find_distance(uint8_t coordinates_t[])
{
    uint16_t distance = sqrt(((coordinates_t[0]-0)^2)+((coordinates_t[1]-0)^2));
    return distance;
}

uint16_t score(uint16_t coordinates_t[0], uint16_t coordinates1_t])
{
    
    if(find_distance(coordinates_t[0],coordinates_t[1]) > 10){
        return 0;
    } else if(find_distance(coordinates_t[0],coordinates_t[1]) == 10){
        return 1;
    } else if(find_distance(coordinates_t[0],coordinates_t[1]) >= 5){
        return 5;
    } else if(find_distance(coordinates_t[0],coordinates_t[1]) >=1){
        return 10;
    }
    return 0;
}

