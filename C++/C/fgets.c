#include <stdio.h> // Include the standard input/output library

int main() // The main function where the program starts execution
{
    // Declare a character array (string) to store user input
    // This array can hold up to 99 characters plus a null terminator ('\0')
    char s[100];

    // Read a line of input from the user (from standard input, stdin)
    // 'fgets' takes three arguments:
    // 1. The buffer (array) to store the input
    // 2. The size of the buffer (to prevent overflow)
    // 3. The input stream (stdin means standard input, usually the keyboard)
    fgets(s, sizeof(s), stdin);

    // This is a placeholder for additional code.
    // You can process the input or perform other operations here.
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // Print "Hello, World!" followed by a newline character (\n)
    printf("Hello, World!\n");

    // Print the string stored in 's'
    // Since 'fgets' includes the newline character if it fits, the output
    // may include an extra line break if the user pressed Enter.
    printf("%s", s);

    // Return 0 to indicate the program ran successfully
    return 0;
}
