#include <iostream> //Header file of the standard library

using namespace std;

int main() // main function of the program
{
    int i = 0; 
    while (i < 10) //Example of a loop using while statement.
    {
        cout << i << endl; //Prints the value of i
        i++; //i = i + 1
    }

    for (int i = 0; i < 10; i++) //Example of a loop using for statement
    {
        cout << i << endl; //Prints the value of i
    }
    return 0; //End of the program
}