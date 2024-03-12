#include <iostream>
#include <math.h>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main(){

    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";
    
    cout << "Funcion: (raiz de (x)/(y^2-1)" << endl;

    int x = 0, y = 0; // Declarar las variables

    cout << "Ingresa el valor de x: "; cin >> x; // Recibir el valor de x
    cout << "Ingresa el valor de y: "; cin >> y; // Recibir el valor de y

    float result = (sqrt(x))/(pow(y,2)-1); // Calcular el resultado de la formula

    // la funcion sqrt nos da la raiz cuadrada de un numero y la funcion pow nos da la potencia

    cout << "El resultado es: " << result; // Imprimir el resultado

    return 0; // Fin del programa
}
	
	
