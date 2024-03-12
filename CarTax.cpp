#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {

    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 

    cout << "Concesionario MAXAUTOS" << endl; // Enunciado del programa

    float price = 0; // Declarar la variable para el valor comercial

    cout << "Ingresa el valor comercial del vehiculo: "; cin >> price; // Recibir el valor comercial por teclado

    cout << "El valor a pagar del impuesto es: $" << price * 0.025 << endl; // Imprimir el valor a pagar

    return 0;
}
