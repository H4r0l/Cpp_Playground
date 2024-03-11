#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int input = 0; // variable to store input
    float Dollar = 4000.00; // variables to store exchange rates
    double Euro = 4500.00; // variables to store exchange rates

    printf("Ingresa la cantidad en pesos: ");scanf("%d", &input); // read input

    cout << "La cantidad en dolares es: " << input / Dollar << endl << "La cantidad en euros es: " << input / Euro << endl; 
    // print results
}