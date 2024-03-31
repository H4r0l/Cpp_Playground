#include <iostream>

using namespace std;

int main() {

    cout << "Calculadora de tarifas" << endl; // Enunciado del programa
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";

    short int type = 0; // Declarar la variable para el tipo de vehiculo

    cout << "Ingresa el tipo de vehiculo (1-7): ";  // MSJ Ingresar el tipo de vehiculo
    cout << "Camperos, automoviles y camionetas" << endl << "Buses y Microbuses" << endl << "Camiones" << endl << "Camiones de dos ejes" << endl << "Camiones de tres y cuatro ejes" << endl << "Camiones de cinco o mas ejes" << endl << "Ambulancia \n" << endl;
    // Enunciado opciones de vehiculos
    cin >> type; // Ingresar el tipo de vehiculo

    switch (type) { // Switch para el tipo de vehiculo
        case 1:
            cout << "\tCategoria | Camperos, automoviles y camionetas: $7.700" << endl;
            break;
        case 2:
            cout << "\tCategoria | Buses y Microbuses: $13.200" << endl;
            break;
        case 3:
            cout << "\tCategoria | Camiones: $8.400" << endl;
            break;
        case 4:
            cout << "\tCategoria | Camiones de dos ejes: $19.200" << endl;
            break;
        case 5:
            cout << "\tCategoria | Camiones de tres y cuatro ejes: $29.100" << endl;
            break;
        case 6:
            cout << "\tCategoria | Camiones de cinco o mas ejes: $37.700" << endl;
            break;
        case 7:
            cout << "\tCategoria | Ambulancias: $15.000" << endl;
        default:
            cout << "\tNo se reconoce el tipo de vehiculo" << endl; // MSJ No se reconoce el tipo de vehiculo
    }
    system("pause"); // Pausar el programa para que el usuario pueda ver el resultado
    return 0;
}
