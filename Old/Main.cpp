#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Age; 
    string Name;

    cout<<"Ingresa tu nombre: "; cin>>Name;
    cout<<"Ingresa tu edad: "; cin>>Age;

    int CurrentYear = 2024;
    int birthYear = CurrentYear - Age;

    cout<<"Te llamas"<<Name<<"Y Naciste en: "<< birthYear;
    return 0;
}