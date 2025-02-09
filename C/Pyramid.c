#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    
        // Calculate matrix size
    int size = 2 * n - 1;
    
    // Iterate through rows
    for (int i = 0; i < size; i++) {
        
        // Iterate through columns
        for (int j = 0; j < size; j++) {
            
            // Calculate the minimum distance from any edge
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            // Ensure correct min_distance calculation
            int min_distance = top;
            if (left < min_distance) min_distance = left;
            if (bottom < min_distance) min_distance = bottom;
            if (right < min_distance) min_distance = right;

            // Compute the number to print
            int num = n - min_distance;

            // Print the number with a space
            printf("%d ", num);
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }
    
    return 0;
}