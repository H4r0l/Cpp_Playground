#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {

    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 

    cout << "Recorrido auto" << endl; // Enunciado del programa

    float km = 0; // Declarar la variable para los kilometros

    int numPeajes = 0; // Declarar la variable para el número de peajes

    cout << "Ingresa los kilometros recorridos: "; cin >> km; // Recibir los kilometros por teclado
    cout << "Ingresa el numero de peajes: "; cin >> numPeajes; // Recibir el número de peajes por teclado

    float lts = km / 30;

    float precioGalon = 8525; // Declarar la variable para el valor de la gasolina

    float peaje = 9600; // Declarar la variable para el valor del peaje

    cout << "Se consumieron " << lts << " galones de gasolina, para un total de: " << lts * precioGalon << endl ; // Imprimir el total de galones de gasolina consumidos
    cout << "El valor a pagar en peajes es: " << peaje * numPeajes << endl; // Imprimir el valor a pagar por peaje
    cout << "El valor total de gastos es: $" << (precioGalon * lts) + peaje * numPeajes << endl; // Imprimir el valor total de gastos

    return 0;
}

