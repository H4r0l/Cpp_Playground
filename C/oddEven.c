#include <stdio.h> // Standard input-output library
#include <string.h> // String handling library (not used in this program)
#include <math.h> // Math library (not used in this program)
#include <stdlib.h> // Standard library (not used in this program)

int main() 
{
    // Array of strings representing numbers 1 through 9 in English
    const char* numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int a, b; // Declare two integers to hold input range values
    
    // Read two integers from user input, separated by a newline
    scanf("%d\n%d", &a, &b);
    
    // Loop through all integers in the range [a, b]
    for(int i = a; i <= b; i++) {
        if(i <= 9) {
            // If the current number is between 1 and 9, print its corresponding word
            printf("%s\n", numbers[i - 1]);
        } else if(i > 9) {
            // If the number is greater than 9, check if it is even or odd
            if(i % 2 == 0) {
                // If the number is even, print "even"
                printf("even\n");
            } else {
                // If the number is odd, print "odd"
                printf("odd\n");
            }
        }
    }
    
    return 0; // Return 0 to indicate successful program execution
}
