#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    if (queen_1.row < 1 || queen_1.row > 8 || queen_1.column < 1 || queen_1.column > 8 ||
    queen_2.row < 1 || queen_2.row > 8 || queen_2.column < 1 || queen_2.column > 8){
    return (attack_status_t)INVALID_POSITION;
    }    
    else if(queen_1.row == queen_2.row && queen_1.column == queen_2.column){
        return (attack_status_t)INVALID_POSITION;
    }
    else if(queen_1.row == queen_2.row || queen_1.column == queen_2.column){
        return (attack_status_t)CAN_ATTACK; 
    } else if(abs(queen_1.row - queen_2.row) == abs(queen_1.column - queen_2.column)){
        return (attack_status_t)CAN_ATTACK;  
    }
    
    return (attack_status_t)CAN_NOT_ATTACK;
}