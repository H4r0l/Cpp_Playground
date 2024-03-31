#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "Suma de potencias" << endl; // Enunciado del programa 
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C" << endl;

    int sum = 0, power = 0, n; // Declarar las variables

    cout << "Digite el numero de elementos a sumar: "; cin >> n; // Asignar valor int por usuario

    for (int i = 1; i <= n; i++) { // Iterar de 1 hasta el valor de n de 1 en 1 
        power = pow(2, i); // Calcular la potencia de 2 al valor de i en cada iteracion del for
        sum += power; // Sumar la potencia al valor de sum
    }

    cout << "\nLa suma es: " << sum << endl; // Imprimir el resultado

    system("pause"); // Pausar el programa para que el usuario pueda ver el resultado
    
    return 0;
}
