// Include necessary libraries for input/output, string manipulation, math operations, and standard library functions
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Main function where program execution begins
int main() 
{
    // Declare variables to store a character, a string, and a sentence
    char ch;
    char s[20];
    char sen[20];
    
    // Read a character from the user
    scanf("%c",&ch);
    
    // Read a string from the user (up to 19 characters)
    scanf("%s",s);
    
    // Consume the newline character left in the input buffer
    scanf("\n");
    
    // Read a sentence from the user (up to 19 characters, until a newline is encountered)
    scanf("%[^\n]%*c", sen);
    
    // Print the character, string, and sentence to the console
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);   
    return 0;
}

// Function to demonstrate basic arithmetic operations with numbers
void numbertypes()
{
    // Declare variables to store integers and floating-point numbers
    int var1, var2;
    float fvar1, fvar2;
    
    // Read two integers from the user
    scanf("%d %d\n", &var1, &var2);
    
    // Read two floating-point numbers from the user
    scanf("%f %f", &fvar1, &fvar2);
    
    // Calculate the sum and difference of the integers
    int sum, difference;
    sum = var1 + var2; 
    difference = var1 - var2;
    
    // Print the sum and difference of the integers
    printf("%d %d\n", sum, difference);
    
    // Calculate the sum and difference of the floating-point numbers
    float fsum, fdiff;
    fsum = fvar1 + fvar2;
    fdiff = fvar1 - fvar2;
    
    // Print the sum and difference of the floating-point numbers with one decimal place
    printf("%.1f %.1f", fsum, fdiff);
}

// Function to find the maximum of four integers
int max_of_four() {
    // Declare variables to store four integers
    int a, b, c, d;
    
    // Read four integers from the user
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // Initialize the maximum value to 0
    int res = 0;
    
    // Compare each integer with the current maximum and update the maximum if necessary
    if(a > res){
        res = a;
    }
    if(b > res){
        res = b;
    }
    if(c > res){
        res = c;
    }
    if(d > res){
        res = d;
    }
    
    // Return the maximum of the four integers
    return res;
}

// Function to update two integers by calculating their sum and difference
void update(int *a,int *b) {
    // Calculate the sum of the two integers
    int sum = *a + *b;
    
    // Calculate the absolute difference of the two integers
    int diff = abs(*a - *b);
    
    // Update the first integer to the sum
    *a = sum;
    
    // Update the second integer to the difference
    *b = diff;
}