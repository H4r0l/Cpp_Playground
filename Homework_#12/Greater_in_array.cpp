#include <iostream> // Libreria de entrada y salida

using namespace std; // Espacio de trabajo estandar

int main() // Funcion principal
{
    int numeros[100]; // Declarar el vector de 100 elementos
    int n, mayor = 0; // Declarar variables necesarias para el programa y el elemento mayor
    
    cout << "Digite el numero de elementos del arreglo: "; cin >> n; // Asignar valor int por usuario
    
    for(int i = 0; i < n; i++){ // Iterar de 0 hasta el valor de n de 1 en 1
        cout << i+1 << ". Digite un numero: "; cin >> numeros[i]; // Asignar valor int por usuario
        
        if(numeros[i] > mayor ){ // Evaluar si el elemento del vector es mayor que el elemento mayor
            mayor = numeros[i]; // True | Asignar el valor de i al elemento mayor
        }
    }
    cout << "\n El mayor elemento del vector es: " << mayor << endl; // Imprimir el elemento mayor
    
    return 0;
}