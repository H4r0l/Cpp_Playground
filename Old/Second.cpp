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

    // Definir variable para guardar el valor de 9 dividido 2
    float division = 9.0 / 2.0;
    cout << "9 dividido 2 : " << division << endl;

    // Definir variable para guardar el residuo de 17 dividido 3
    int residuo = 17 % 3;
    cout << "Residuo de 17 dividido 3 : " << residuo << endl;

    // Evaluar el valor de 3 menos la multiplicacion de 4 por 6
    int resultado = 3 - (4 * 6);
    cout << "Tres menos la multiplicacion de cuatro por seis : " << resultado << endl;

    // Evaluar el valor de 9 mayor que 3 y 5 menor que 11
    cout << "9 > 3 es: " << ((9 > 3) ? "Verdadero" : "Falso") << " y 5 < 11 es: " << ((5 < 11) ? "Verdadero" : "Falso") << endl;

    // Asignar el cubo de 11 a una variable cubo
    int cubo = pow(11, 3);
    cout << "Cubo de 11 : " << cubo << endl;

    // Obtener la raiz cubica de 1331 usando la funcion cbrt
    float raizCubica = cbrt(1331);
    cout << "La raiz cubica de 1331 : " << raizCubica << endl;

    // Raiz cuadrada de 25
    float raizCuadrada = sqrt(25);
    cout << "Raiz cuadrada de 25 : " << raizCuadrada << endl;

    // Calcular el seno de 2pi/6 usando la funcion sin
	float pi = 3.14159265358979323846;
    float angulo = (2 * pi) / 6;
    float seno = sin(angulo);
    cout << "Seno de 2pi/6 : " << seno << endl;

    return 0;
}
