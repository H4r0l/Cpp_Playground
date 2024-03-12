#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {

    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 

    cout << "Factura de supermercado" << endl; // Enunciado del programa

    float price = 0; // Declarar la variable para el precio unitario
    int quantity = 0; // Declarar la variable para la cantidad

    cout << "Ingresa el precio unitario: "; cin >> price; // Recibir el precio unitario por teclado
    cout << "Ingresa la cantidad: "; cin >> quantity; // Recibir la cantidad por teclado

    float total = price * quantity; // Calcular el valor total
    float tax = total * 0.19; // Calcular el valor del IVA
    cout << "\nFactura =\t" << endl; // Imprimir el encabezado de la factura
    cout << "\t|_El valor total es: " << total << endl; // Imprimir el valor total
    cout << "\t|_Fueron " << quantity << " articulos, con un valor unitario de: " << price << endl; // Imprimir la cantidad de articulos
    cout << "\t|_El valor del IVA es: " << tax << endl; // Imprimir el valor del IVA

    cout << "\t|_El valor neto a pagar es: " << total - tax << endl; // Imprimir el valor neto

    cout << "\t|_Gracias por su compra"; // Imprimir el mensaje de despedida

    return 0;
}
