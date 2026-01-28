#include "collatz.h"
#include <stdint.h>

int steps(int start)
{
    int steps = 0;
    int res = start;
    
    if(start < 1){
        return -1;
    } else {
        while(res > 1){
        if(res % 2 == 0){
            res = res / 2;
        } else if(res % 2 != 0){
            res = res*3 + 1;
        }
        steps += 1;
    }
    }
    return steps;
}
