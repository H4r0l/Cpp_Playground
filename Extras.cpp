#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {

    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 

    cout << "Salario con horas extras" << endl; // Enunciado del programa

    float basicSalary = 0; // Declarar la variable para el valor bruto del salario

    float extraHours = 0; // Declarar la variable para las horas

    float value = 0; // Declarar la variable para el valor de la hora

    cout << "Ingresa el valor bruto del salario: "; cin >> basicSalary; // Recibir el valor bruto del salario
    cout << "Ingresa las horas extras: "; cin >> extraHours; // Recibir las horas extras
    cout << "Ingresa el valor de la hora extra: "; cin >> value; // Recibir el valor de la hora

    float fullSalary = basicSalary + (extraHours * value); // Calcular el valor bruto del salario

    float loanDiscount = fullSalary * 0.05; // Calcular el descuento por concepto de prestamos

    cout << "\n|_El valor bruto del salario es de: " << fullSalary << endl; // Imprimir el valor bruto del salario
    cout << "|_El descuento por concepto de prestamos es de: " << loanDiscount << " (5%)" << endl; // Imprimir el descuento por concepto de prestamos
    cout << "|_EL sueldo neto es de: " << fullSalary - loanDiscount << endl; // Imprimir el sueldo neto

    return 0; // Fin del programa
}
