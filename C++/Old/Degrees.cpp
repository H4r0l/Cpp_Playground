#include <iostream>
#include <math.h>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {

    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 

    float celsius; // Variable para la temperatura en grados Celsius

    cout << "Ingrese la temperatura en grados Celsius: ";cin >> celsius; // Ingresar la temperatura en grados Celsius

    // Convertir Celsius a Fahrenheit
    float fahrenheit = (celsius * 9 / 5) + 32; // Formula para convertir Celsius a Fahrenheit

    cout << "La temperatura en grados Fahrenheit es: " << fahrenheit <<endl; // Imprimir la temperatura en grados Fahrenheit

    return 0;
}
