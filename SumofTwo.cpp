#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main(){
	
	cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 
	
	int num1, num2; // Declarar variables
	
	cout << "Ingrese dos numeros: "; cin >> num1 >> num2; // MSJ & recibir valores por usuario
	
	if((num1 == 0) ){ // Evaluar variable num1 para saber si es neutro 	
		cout << "La división es 0 y la suma es " << num1 + num2; // True | La division por cero siempre da cero
	} else if(num2 == 0) { // Evaluar variable num2 para saber si es neutro
		cout << "La división es 0 y la suma es " << num1 + num2; // True
	} else { // De lo contrario
		cout << "La division es " << num1 / num2 << " y la suma es " << num1 + num2; // MSJ & Respuesta
	}
	return 0;
}
