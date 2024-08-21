#include <stdio.h>


unsigned int square_of_sum(unsigned int number)
{
    unsigned int res = 0;
    for(unsigned int i = 1; i <= number; i++){ 
        res = res + i;
    }
    res = res * res;
    return res;
}
unsigned int sum_of_squares(unsigned int number)
{
    unsigned int res = 0;
    for(unsigned int i = 1; i <= number; i++){ 
        res += i * i;
    }
    return res;
}
unsigned int difference_of_squares(unsigned int number)
{
    return square_of_sum(number) - sum_of_squares(number);
}

int main()
{
    printf("%d", difference_of_squares(5));
    return 0;
}