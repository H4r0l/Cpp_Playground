#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    // Check if both queens are within the valid range of the chessboard (1 to 8)
    if (queen_1.row < 1 || queen_1.row > 8 || queen_1.column < 1 || queen_1.column > 8 ||
        queen_2.row < 1 || queen_2.row > 8 || queen_2.column < 1 || queen_2.column > 8) {
        return INVALID_POSITION;
    }
    
    // Check if queens are in the same position
    if (queen_1.row == queen_2.row && queen_1.column == queen_2.column) {
        return INVALID_POSITION;
    }
    
    // Check if queens can attack each other
    // They can attack if they are in the same row, same column, or same diagonal
    if (queen_1.row == queen_2.row || queen_1.column == queen_2.column ||
        abs(queen_1.row - queen_2.row) == abs(queen_1.column - queen_2.column)) {
        return CAN_ATTACK;
    }
    
    // If none of the conditions for attack are met, they cannot attack each other
    return CAN_NOT_ATTACK;
}
