#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {
	
	cout << "Determinar el numero mas alto \t\n\n"; // Enunciado
	cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 

	int num1, num2, num3; // Def variables para los 3 numeros
	
	// Método 1
	cout << "\nIngresa tres numeros: ";
	cin >> num1 >> num2 >> num3; // Asignar valores por usuario
	
	if (num1 > num2) { // Evalua si num1 mayor que num2 
		if (num1 > num3) { // Evalua si num1 mayor que num3
			cout << "El numero mas grande es: " << num1; // True | MSJ
		} else { // De Lo contrario
			cout << "El numero mas grande es: " << num3; // False | MSJ
		}
	} else { // De lo contrario
		if (num2 > num3) { // Evalua si num2 mayor que num3 
			cout << "El numero mas grande es: " << num2; // True
		} else {
			cout << "El numero mas grande es: " << num3; // False
		}
	}
	
	// Método 2
	cout << "\nIngresa tres numeros: ";
	cin >> num1 >> num2 >> num3;
	
	if (num2 > num1) {
		if (num2 > num3) {
			cout << "El numero mas grande es: " << num2;
		} else {
			cout << "El numero mas grande es: " << num3;
		}
	} else {
		if (num1 > num3) {
			cout << "El numero mas grande es: " << num1;
		} else {
			cout << "El numero mas grande es: " << num3;
		}
	}
	
	// Método 3
	cout << "\nIngresa tres numeros: ";
	cin >> num1 >> num2 >> num3;
	
	if (num3 > num1) {
		if (num3 > num2) {
			cout << "El numero mas grande es: " << num3;
		} else {
			cout << "El numero mas grande es: " << num2;
		}
	} else {
		if (num1 > num2) {
			cout << "El numero mas grande es: " << num1;
		} else {
			cout << "El numero mas grande es: " << num2;
		}
	}
	
	return 0;
}
