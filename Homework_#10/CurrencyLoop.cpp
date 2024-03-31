#include <iostream>

using namespace std;

int main()
{

    cout << "Convertidor de Monedas" << endl; // Enunciado del programa
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";

    int pesos = 0; // Declarar la variable para las monedas
    float Dollar = 4000.00; // Asignar valor a la variable para el dolar
    float Euro = 5000.00;  // Asignar valor a la variable para el euro

    for(int i = 1; i <= 5; i++) // Iterar 5 veces para probar 5 clientes atendidos por el programa 
    {
        cout << "Ingresa la cantidad en pesos: "; cin >> pesos;
        // Ingresar la cantidad de pesos a convertir por el usuario
        cout << "La cantidad en dolares es: " << pesos / Dollar << endl << "La cantidad en euros es: " << pesos / Euro << endl;
        // Imprimir la cantidad en dolares y euros
    }
    return 0;
}
