#include "darts.h"
#include <stdint.h>
#include <math.h>

// Function to calculate the distance from the origin to the given point
uint16_t find_distance(uint8_t coordinates[2])
{
    // Calculate distance using Pythagorean theorem
    uint16_t distance = (uint16_t)sqrt((coordinates[0] * coordinates[0]) + (coordinates[1] * coordinates[1]));
    return distance;
}

// Function to calculate the score based on the coordinates
uint16_t score(uint8_t coordinates[2])
{
    uint16_t distance = find_distance(coordinates);  // Calculate the distance once

    // Determine the score based on the distance
    if (distance > 10) {
        return 0;
    } else if (distance == 10) {
        return 1;
    } else if (distance >= 5) {
        return 5;
    } else if (distance >= 1) {
        return 10;
    }

    return 0;
}
