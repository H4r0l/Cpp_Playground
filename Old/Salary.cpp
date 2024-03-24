#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {

    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 

    cout << "Calculadora de salario" << endl; // Enunciado del programa

    float hours = 0; // Declarar la variable para las horas

    float value = 0; // Declarar la variable para el valor de la hora

    cout << "Ingresa las horas trabajadas: "; cin >> hours;
    cout << "Ingresa el valor de la hora: "; cin >> value;

    float salary = hours * value; // Declarar la variable para el valor bruto del salario
    float tax = salary * 0.02; // Declarar la variable para el impuesto

    cout << "El salario final es de: " << salary - tax << endl << "El impuesto es de: " << tax << endl;

}
