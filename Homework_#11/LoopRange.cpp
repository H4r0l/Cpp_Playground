#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C" << endl;

    int numero, suma = 0; // Declarar variables

    do{ // Iterar hasta que el usuario ingrese un numero entre 20 y 30
        cout << "Ingresa un numero: "; cin >> numero; // Asignar valor int por usuario
        
        if (numero > 0){ // Evaluar si el numero es positivo
            suma += numero; // Sumar el numero
        }
    } while(((numero < 20) || (numero > 30)) && (numero != 0));
    // Iterar hasta que el usuario ingrese un numero entre 20 y 30 o sea 0
    cout << "\nLa suma es: " << suma << endl; // Imprimir el resultado

    system("pause"); // Pausar el programa para que el usuario pueda ver el resultado
    return 0;
}