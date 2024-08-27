#include "queen_attack.h"
#include <stdbool.h>


attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    position_t diagonal1;
    diagonal1.row = queen_1.row - queen_1.column; 
    diagonal1.column = queen_1.column - queen_1.row; 
    position_t diagonal2;
    diagonal2.row = queen_2.row - queen_2.column; 
    diagonal2.column = queen_2.column - queen_2.row; 
    if(queen_1.row > 8 || queen_2.row > 8 || queen_1.column > 8 || queen_2.column > 8 || queen_1 == queen_2){
        return (attack_status_t)INVALID_POSITION;
    }
    else if(queen_1.row == queen_2.row || queen_1.column == queen_2.column){
        return (attack_status_t)CAN_ATTACK; 
    } else if(diagonal1.row == diagonal2.row && diagonal1.column == diagonal2.column){
        return (attack_status_t)CAN_ATTACK;  
    }
    
    return (attack_status_t)CAN_NOT_ATTACK;
}