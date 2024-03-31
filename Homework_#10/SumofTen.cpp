#include <iostream>

using namespace std;

int main() {
    int num, positivos = 0, negativos = 0, ceros = 0, suma = 0; // Declarar variables

    for (int i = 0; i < 10; i++) { // Iterar 10 veces para sumar 10 numeros 
        cout << "Ingrese un numero: "; cin >> num; // MSJ & Asignar valor int por usuario

        if (num > 0) { // Evaluar variable para identificar si es positivo 
            positivos++; // True | MSJ & Sumar 1
        } else if (num < 0) {  // Evaluar variable para identificar si es negativo
            negativos++; // True | MSJ & Sumar 1
        } else { // Evaluar variable para identificar si es cero
            ceros++; // True
        }

        suma += num; // Suma los 10 numeros
    }
    cout << "Hay " << positivos << " numeros positivos, " << negativos << " numeros negativos y " << ceros << " ceros en la suma. La suma total es " << suma << ".";
    // Imprimir el resultado de la suma de los 10 numeros ingresados por el usuario y la suma total de todos los tipos de numeros
    return 0;
}