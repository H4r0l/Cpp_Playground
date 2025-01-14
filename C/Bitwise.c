#include <stdio.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  for(int i = 1; i < n; i++){
    int max = 0;
    
    if((n & k) > max){max = n & k; printf("%d\n", max);}
    else if((n | k) > max){max = n | k; printf("%d\n", max);}
    else if((n ^ k) > max){max = n ^ k; printf("%d\n", max);}
  }
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
    return 0;
}
