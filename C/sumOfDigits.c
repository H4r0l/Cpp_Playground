#include <stdio.h>

int main() {
    // Declare a variable to store the input number
    int n;

    // Read an integer input from the user
    scanf("%d", &n);

    // Declare a character array to store the string representation of the number
    char str[12]; // Handles integers up to 10 digits plus null character

    // Convert the integer 'n' to a string and store it in 'str'
    sprintf(str, "%d", n);

    // Declare a variable to store the sum of digits
    int res = 0;

    // Iterate through each character in the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert the character to its integer equivalent
        int val = str[i] - '0';

        // Add the digit to the result
        res += val;
    }

    // Print the sum of the digits
    printf("%d", res);

    // Indicate that the program executed successfully
    return 0;
}
