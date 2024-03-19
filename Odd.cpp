#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main() {
	
	cout << "Determina si el numero es par o impar\t\n\n";
	cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 
	
	int num; // Def variable 
	
	cout << "Digite un numero: "; cin >> num; // Asignar valor int por usuario
	
	if(num == 0){ // Evaluar variable para identificar si es cero
		cout << "El numero es cero"; // True 
	} else if (num%2==0){ // Evaluar variable con operador modulo(%) para saber si su división da residuo
		cout << "El numero es par"; // True
	} else { // De lo contrario
		cout << "El numero es impar";  // False
	}
	
	return 0;
}
