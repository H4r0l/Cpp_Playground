#include <iostream>

using namespace std;

int main() {
	
	cout << "Ingresa dia de la semana"; // MSJ & Ingresa el dia de la semana
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";
    
    int day; // Def variable para numero del dia
    cout << "Ingresa el numero del dia de la semana: "; cin >> day; // MSJ & asignar valor a day

    switch(day){ // Evaluar si el valor numerico de Day es ese dia
        case 1: cout << "Lunes | Primer dia | Monday"; break; // True
        case 2: cout << "Martes | Segundo dia | Tuesday"; break; 
        case 3: cout << "Miercoles | Tercer dia | Wednesday"; break;
        case 4: cout << "Jueves | Cuarto dia | Thursday"; break;
        case 5: cout << "Viernes | Quinto dia | Friday"; break;
        case 6: cout << "Sabado | Sexto dia | Saturday"; break;
        case 7: cout << "Domingo | Septimo dia | Sunday"; break;
        default: cout << "Dia invalido"; // False
    }
    
    char dayLetter; // Def variable para primera letra

    cout << "\nIngresa la primera letra del dia de la semana: "; cin >> dayLetter; // MSJ & asignar valor a dayLetter

    switch(dayLetter){ // Evaluar si el valor de dayLetter es ese dia
        case 'L': cout << "Lunes | Primer dia | Monday"; break;
        case 'm': cout << "Martes | Segundo dia | Tuesday"; break;
        case 'M': cout << "Miercoles | Tercer dia | Wednesday"; break;
        case 'J': cout << "Jueves | Cuarto dia | Thursday"; break;
        case 'V': cout << "Viernes | Quinto dia | Friday"; break;
        case 'S': cout << "Sabado | Sexto dia | Saturday"; break;
        case 'D': cout << "Domingo | Septimo dia | Sunday"; break;
        default: cout << "Dia invalido"; // False
    }
    return 0;
}
