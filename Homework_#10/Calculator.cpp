#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "Calculadora" << endl;
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";

    short int num1, num2, option;

    cout << "Ingresa el primer numero: "; cin >> num1;
    cout << "Ingresa el segundo numero: "; cin >> num2;

    cout << "Selecciona la operacion: " << endl << "1. Suma" << endl << "2. Resta" << endl << "3. Multiplicacion" << endl << "4. Division" << endl << "5. Potenciacion" << endl << "6. Radicacion" << endl << "Opcion: " << endl;
    cin >> option;

    switch(option) {
        case 1:
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case 4:
            if((num1 == 0) || (num2 == 0)) {
                cout << "La division por cero siempre da cero";
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            }
            break;
        case 5:
            cout << num1 << " ^ " << num2 << " = " << pow(num1, num2);
            break;
        case 6:
            cout << "La raiz cuadrada de " << num1 << " = " << sqrt(num1);
            break;
        default:
            cout << "Opcion invalida";
            break;
    }

    return 0;
}