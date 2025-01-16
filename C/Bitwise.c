#include <stdio.h>

// Function to calculate the maximum values for AND, OR, and XOR operations 
// between pairs of integers (i, j) where 1 <= i < j <= n, 
// and the results are less than k.
void calculate_the_maximum(int n, int k) {
    // Initialize variables to store the maximum values for AND, OR, and XOR operations
    int max_and = 0, max_or = 0, max_xor = 0;

    // Loop through all possible pairs of integers (i, j)
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            // Calculate the result of AND, OR, and XOR for the current pair (i, j)
            int and_result = i & j;  // Bitwise AND operation
            int or_result = i | j;   // Bitwise OR operation
            int xor_result = i ^ j;  // Bitwise XOR operation

            // Update max_and if the AND result is less than k and greater than the current max_and
            if (and_result < k && and_result > max_and) {
                max_and = and_result;
            }

            // Update max_or if the OR result is less than k and greater than the current max_or
            if (or_result < k && or_result > max_or) {
                max_or = or_result;
            }

            // Update max_xor if the XOR result is less than k and greater than the current max_xor
            if (xor_result < k && xor_result > max_xor) {
                max_xor = xor_result;
            }
        }
    }

    // Print the maximum values for AND, OR, and XOR operations
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    // Read two integers n and k from the user
    // n: The upper limit for the range of integers
    // k: The threshold value for comparison
    scanf("%d %d", &n, &k);
    
    // Call the function to calculate and display the maximum values
    calculate_the_maximum(n, k);
    
    return 0; // Return 0 to indicate successful program execution
}
