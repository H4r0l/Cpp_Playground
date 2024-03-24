#include <iostream>

using namespace std;

int main() {
    
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";
    cout << "Ingresa dia de la semana";
    
    int day;
    cout << "Ingresa el numero del dia de la semana: "; cin >> day;

    switch(day){
        case 1: cout << "Lunes | Primer dia | Monday"; break;
        case 2: cout << "Martes | Segundo dia | Tuesday"; break;
        case 3: cout << "Miercoles | Tercer dia | Wednesday"; break;
        case 4: cout << "Jueves | Cuarto dia | Thursday"; break;
        case 5: cout << "Viernes | Quinto dia | Friday"; break;
        case 6: cout << "Sabado | Sexto dia | Saturday"; break;
        case 7: cout << "Domingo | Septimo dia | Sunday"; break;
        default: cout << "Dia invalido";
    }
    
    char dayLetter;

    cout << "Ingresa la primera letra del dia de la semana: "; cin >> dayLetter;

    switch(dayLetter){
        case 'L': cout << "Lunes | Primer dia | Monday"; break;
        case 'm': cout << "Martes | Segundo dia | Tuesday"; break;
        case 'M': cout << "Miercoles | Tercer dia | Wednesday"; break;
        case 'J': cout << "Jueves | Cuarto dia | Thursday"; break;
        case 'V': cout << "Viernes | Quinto dia | Friday"; break;
        case 'S': cout << "Sabado | Sexto dia | Saturday"; break;
        case 'D': cout << "Domingo | Septimo dia | Sunday"; break;
        default: cout << "Dia invalido";
    }
}