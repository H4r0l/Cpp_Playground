#include <stdio.h> // Standart I/O library
#include <cstdlib> // Standard C library

void update(int *a,int *b) { // Update function to update a and b
    // Complete this function
    int sum = *a + *b; // Sum of a and b using a pointer 
    int diff = *a - *b; // Difference of a and b using a pointer
    
    *a = sum; *b = abs(diff); // Update a and b using pointers and abs function
    // the abs function returns the absolute value of a number
}

int main() {
    int a, b; // variables
    int *pa = &a, *pb = &b; // pointers to a and b
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}