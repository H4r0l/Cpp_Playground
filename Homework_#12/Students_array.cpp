#include <iostream> // Libreria de entrada y salida de datos

using namespace std; // Espacio de trabajo estandar

int main() // Funcion principal
{
    short int students[8]; // Vector de 8 elementos
    short int adults, minors; // Declarar variables necesarias para el programa
    
    for(int i = 0; i < 8; i++){ // Iterar de 0 hasta el valor de 8 de 1 en 1
        cout << "Ingresa la edad del estudiante numero " << i + 1 << ": "; cin >> students[i];
         // Asignar valor int por usuario para cada elemento del vector
        if(students[i] >= 18){ // Evaluar si el elemento del vector es mayor o igual a 18
            adults++;  // True | Asignar el valor de i al elemento adulto
        }
        else { minors++;} // False | Asignar el valor de i al elemento menor de edad
    }
    cout << "Hay " << adults << " mayores de edad y " << minors << " menores de edad.";
    // Imprimir el resultado
    return 0;
}