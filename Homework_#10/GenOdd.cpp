#include <iostream>

using namespace std;

int main() {

    cout << "Generar Numeros Impares" << endl; // Enunciado
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";

    int j; // Declarar la variable

    for(int i = 1; i <= 5; i++) { /*Iterar 5 veces para probar 5 intervalos de numeros impares*/

        cout << "Ingresa el valor del intervalo: "; cin >> j;     
        // Ingresar el valor de k por teclado para generar el intervalo
        for(int k = 1; k <= j; k += 2) { // Para el numero K empezando en 1 hasta el valor de j incrementando de 2 en 2
            // Iterar el intervalo de k desde 1 hasta la cantidad indicada por el usuario (j)
            cout<< "\t" << k << endl; // Imprimir los numeros impares
        }
    }

    return 0; // Fin del programa
}