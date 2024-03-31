#include <iostream>
#include <cmath> // Libreria para las operaciones matematicas pow y sqrt

using namespace std; 

int main() {

    cout << "Calculadora" << endl; // Enunciado del programa
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";

    short int num1, num2, option; // Declarar variables para los 2 numeros de tipo entero corto 

    cout << "Ingresa el primer numero: "; cin >> num1; // Ingresa el primer numero
    cout << "Ingresa el segundo numero: "; cin >> num2; // Ingresa el segundo numero

    cout << "Selecciona la operacion: " << endl << "1. Suma" << endl << "2. Resta" << endl << "3. Multiplicacion" << endl << "4. Division" << endl << "5. Potenciacion" << endl << "6. Radicacion" << endl << "Opcion: " << endl;
    // MSJ & Seleccionar la operacion a realizar
    cin >> option; // Ingresa la operacion a realizar

    switch(option) { // Switch para las 6 operaciones matematicas basicas
        case 1: // Suma
            cout << num1 << " + " << num2 << " = " << num1 + num2; // MSJ & Respuesta
            break; 
        case 2: // Resta
            cout << num1 << " - " << num2 << " = " << num1 - num2; // MSJ & Respuesta
            break;
        case 3: // Multiplicacion
            cout << num1 << " * " << num2 << " = " << num1 * num2; // MSJ & Respuesta
            break;
        case 4: // Division
            if((num1 == 0) || (num2 == 0)) { // Evaluar variable num2 para saber si es neutro
                cout << "La division por cero siempre da cero"; // True
            } else { // De lo contrario
                cout << num1 << " / " << num2 << " = " << num1 / num2; // MSJ & Respuesta
            }
            break;
        case 5: // Potenciacion
            cout << num1 << " ^ " << num2 << " = " << pow(num1, num2); // MSJ & Respuesta
            break;
        case 6: // Radicacion
            cout << "La raiz cuadrada de " << num1 << " = " << sqrt(num1); // MSJ & Respuesta
            break;
        default:
            cout << "Opcion invalida";
            break;
    }

    return 0;
}