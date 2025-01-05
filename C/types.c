#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[20];
    char sen[20];
    
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);   
    return 0;
}
void numbertypes()
{
    int var1, var2;
    float fvar1, fvar2;
    
    scanf("%d %d\n", &var1, &var2);
    scanf("%f %f", &fvar1, &fvar2);
    
    int sum, difference;
    sum = var1 + var2; difference = var1 - var2;
    printf("%d %d\n", sum, difference);
    
    float fsum, fdiff;
    fsum = fvar1 + fvar2;
    fdiff = fvar1 - fvar2;
    printf("%.1f %.1f", fsum, fdiff);
}
int max_of_four() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int res = 0;
    
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
    
    return res;
}


void update(int *a,int *b) {
    // Complete this function
    int sum = *a + *b;
    int diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}