#include <iostream>
#include <cmath>

using namespace std;

int gradosRadianes(int grados) {
    return (grados * 3.14) / 180;
}
int celsiusFarenheit(int celsius) {
    return (celsius * 9 / 5) + 32;
}
int metrosPulgadas(int metros){
    return metros * 39.37;
}
int horasSegundos(int horas){
    return horas * 3600;
}

int main(){
    int option = 0;
    int input = 0;
    cout << "1. Grados a Radianes\n2. Celsiu a Farenheit\n3. Pies a Pulgadas\n4. Horas a Segundos\n5.Salir\n\n";cin >> option;

    switch (option) {
        case 1:
            cout << "Ingresa los grados: "; cin >> input;
            cout << gradosRadianes(input) << endl;
            break;
        case 2:
            cout << "Ingresa los celsius: "; cin >> input;
            cout << celsiusFarenheit(input) << endl;
            break;
        case 3:
            cout << "Ingresa los metros: "; cin >> input;
            cout << metrosPulgadas(input) << endl;
            break;
        case 4:
            cout << "Ingresa las horas: "; cin >> input;
            cout << horasSegundos(input) << endl;
            break;
        case 5:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
}