#include <iostream>
#include <string>

using namespace std;

int main (){
    string name;
    int age;

    cout << "Ingresa tu nombre: "; getline(cin, name);
    cout << "Ingresa tu edad: "; cin >> age;

    cout << "Hola ", name, ", Tienes ", age, " años";

    int currentYear = 2024;
    int birthYear = currentYear - age;

    cout << "Naciste en el año", birthYear;

    return 0;
}