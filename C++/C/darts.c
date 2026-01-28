#include "darts.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

// Function to calculate the distance from the origin to the given point
double find_distance(coordinate_t coordinates) {
    // Calculate distance using the Pythagorean theorem
    return sqrt((coordinates.x * coordinates.x) + (coordinates.y * coordinates.y));
}

// Function to calculate the score based on the coordinates
uint16_t score(coordinate_t coordinates) {
    double distance = find_distance(coordinates);  // Calculate the distance once

    // Determine the score based on the distance
    if (distance <= 1.0) {
        return 10; // Inner circle
    }
    if (distance <= 5.0) {
        return 5;  // Middle circle
    }
    if (distance <= 10.0) {
        return 1;  // Outer circle
    }
    return 0;      // Outside the target
}

int main()
{
    coordinate_t point = {};
    printf("Define x and y points: ");
    scanf("%f", &point.x);
    scanf("%f", &point.y);
    float result = score(point);
    printf("the result was: %.2f\n", result );

    return 0;
}
