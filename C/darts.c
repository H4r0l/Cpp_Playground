#include "darts.h"
#include <math.h>

// Function to calculate the distance from the origin to the given point
uint16_t find_distance(coordinate_t coordinates)
{
    // Calculate distance using Pythagorean theorem
    uint16_t distance = (uint16_t)sqrt((coordinates.x * coordinates.x) + (coordinates.y * coordinates.y));
    return distance;
}

// Function to calculate the score based on the coordinates
uint16_t score(coordinate_t coordinates)
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