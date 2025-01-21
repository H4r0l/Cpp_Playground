#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n + (n - 1); i++){
        for(int j = 0; j < n + (n - 1); j++){
            printf("%d ", n );
            
        }
        printf("\n");
    }
    return 0;
}