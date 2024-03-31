#include <iostream>

using namespace std;

int main()
{
    cout << "Iterador Simple" << endl; // Enunciado
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";

    for(int i = 1; i <= 10; i++) // Iterar del 1 al 10, declarar variable i en el for y incrementar en 1 en cada iteracion del for
    {
        cout << i << endl; // Imprimir el valor de i
    }
    system("pause"); // Pausar el programa para que el usuario pueda ver el resultado 

    return 0;
}