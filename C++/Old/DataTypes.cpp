#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char letter; //create variable letter of type char

    printf("Input a letter: ");scanf("%c", &letter); //read a letter
    printf("The letter is: %c\n", letter); //print the letter

    // the sintax of %c is %c, where c is a character variable or a string
    //the sintax of \n allows to print a new line
    // In C++ the % is used to print variables or strings in the same line as printf



    int a;
    long b;
    char c;
    float d;    
    double e;
    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e); //read 5 variables
    cout<<"Ur variables are: \na%d\n%ld\n%c\n%f\n%lf\n"<< a,b,c,d,e;
    //same thing but with cout
    return 0;
}