#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    cout << "Iterador Simple" << endl;
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";

    int i = 10; // Declarar la variable

    while(i >= 1){ // Iterar del 10 al 1
        cout << i << endl; // Imprimir el valor de i
        i--; // i = i - 1
    }
    system("pause"); // Pausar el programa para que el usuario pueda ver el resultado
    
    return 0; 
}