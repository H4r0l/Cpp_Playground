#include "grains.h"

uint64_t square(uint8_t index)
{
    uint64_t res = 1;
    uint64_t value = 0;
    for(int i = 2; i < index; i++){
        value = i*2;
        res += value; 
    }
    if( index == 1){ return 1;}
    return res;
}
uint64_t total(void)
{
    uint64_t res = 1;
    for(int i = 1; i < 64; i++){
        res += i*2;
    }
    return res;
}