#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {
	
	cout << "Determina si la edad esta en el rango\t\n\n"; // Enunciado
	cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 
	
	int edad; // Def variable integer para edad
	
	cout << "Digite su edad: "; cin >> edad; // MSJ | Recibir valor por usuario
	
	if((edad >= 18)&&(edad <= 25)){ // Comparar si edad mayor a 18 OR edad menor a 25
		cout << "Su edad esta en el rango de [18 -> 25]"; // True | MSJ
	} else { // De lo contrario
		cout << "Su edad no esta en el rango"; // False | MSJ
	}
	
	return 0;
}
