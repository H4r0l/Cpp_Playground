#include <iostream>
#include <math.h>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {

    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 

    cout << "--Calcular la distancia entre dos puntos" << endl; // Enunciado del programa
    
    float x1, y1, x2, y2, distancia; // Declarar las variables para las coordenadas x & y

    cout << "Ingrese las coordenadas de x1: " << endl; cin >> x1; // Ingresar las coordenadas x1 
    cout << "Ingrese las coordenadas de y1: " << endl; cin >> y1; // Ingresar las coordenadas y1
    cout << "Ingrese las coordenadas de x2: " << endl; cin >> x2; // Ingresar las coordenadas x2
    cout << "Ingrese las coordenadas de y2: " << endl; cin >> y2; // Ingresar las coordenadas y2

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); // Calcular la distancia entre las coordenadas usando la formula de distancia

    // la funcion sqrt nos da la raiz cuadrada de un numero y la funcion pow nos da la potencia 

    cout << "La distancia es: " << distancia << endl; // Imprimir la distancia calculada

    return 0; // Fin del programa
}
