#ifndef DARTS_H
#define DARTS_H

#include <stdint.h>

// Define the struct for coordinates
typedef struct {
    float x;
    float y;
} coordinate_t;

// Function to calculate the distance from the origin to the given point
double find_distance(coordinate_t coordinates);

// Function to calculate the score based on the coordinates
uint16_t score(coordinate_t coordinates);

#endif // DARTS_H
