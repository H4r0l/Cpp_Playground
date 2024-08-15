#include <iostream> // Libreria estandar

using namespace std; // Espacio de trabajo estandar

int main() // Funcion principal
{
    short int odd[10] = {1,3,5,7,9,11,13,15,17,19}; 
    // Declarar un arreglo de 10 elementos de tipo short int impares
    short int even[10] = {2,4,6,8,10,12,14,16,18,20};
    // Declarar un arreglo de 10 elementos de tipo short int pares
    
    for(int i = 0; i <= 9; i++ ){ // Iterar 10 veces para probar 10 elementos de 1 en 1
        odd[i] = odd[i] + even[i]; // Sumar los elementos de las dos matrices en el mismo indice
        cout << odd[i] << "\n"; // Imprimir el resultado
    }
    
    return 0;
}

