#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {

    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 

    cout << "Convertidor de Monedas" << endl; // Enunciado del programa

    int pesos = 0; // Declarar la variable para las monedas
    float Dollar = 3900.00; // Asignar valor a la variable para el dolar
    float Euro = 4270.00;  // Asignar valor a la variable para el euro

    cout << "Ingresa la cantidad en pesos: "; cin >> pesos; 
    // Ingresar la cantidad de pesos a convertir por el usuario
    cout << "La cantidad en dolares es: " << pesos / Dollar << endl << "La cantidad en euros es: " << pesos / Euro << endl; 
    // Imprimir la cantidad en dolares y euros
}
