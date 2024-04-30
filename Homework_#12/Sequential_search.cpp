#include <iostream> // Libreria estandar de entrada y salida

using namespace std; // Espacio de trabajo estandar 

int main() // Funcion principal
{
    int a[] = {3,4,2,1,5}; // Matriz de 5 elementos 
    int i, dato = 10; // dato a buscar, ademas del indice
    char band = 'F'; // bandera para saber si el dato existe o no 
    
    // Busqueda Secuencial 
    i = 0; // Inicializar el indice
    while ((band == 'F') && (i < 5)){ // Mientras la bandera sea F y el indice sea menor a 5
        if(a[i] == dato){ // Evaluar si el valor de la posicion i es igual al valor de dato
            band = 'V'; // Si es igual, cambiar bandera a V
        }
        i++; // Incrementar el indice
    }
    
    if(band == 'F'){ // Evaluar si la bandera es F
        cout << "El numero a buscar no existe en el arreglo " <<endl;  
    }
    else if(band == 'V'){ // Evaluar si la bandera es V
        cout << "El numero ha sido encontrado en la posicion: " << i - 1 << endl;
        // Imprimir la posicion donde se encontro el dato
    } 
    
    return 0;
}