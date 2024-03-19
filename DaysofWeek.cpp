#include <iostream>

using namespace std;
/*
Autor : Harol Urrea
Codigo : 1804606
Ingenieria Mecatronica Grupo C
*/
int main(){
	
	cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n"; 
	
	int day; // Def variable para numero del dia 
	
	cout << "Ingresa el numero del dia de la semana: "; cin >> day; // MSJ & asignar valor a day
	
	if (day == 1) { // Evaluar si el valor numerico de Day es ese dia
		cout << "Lunes | Primer dia | Monday"; // True
	} else if (day == 2) {
		cout << "Martes | Segundo dia | Tuesday";
	} else if (day == 3) {
		cout << "Miercoles | Tercer dia | Wednesday";
	} else if (day == 4) {
		cout << "Jueves | Cuarto dia | Thursday";
	} else if (day == 5) {
		cout << "Viernes | Quinto dia | Friday";
	} else if (day == 6) {
		cout << "Sabado | Sexto dia | Saturday";
	} else if (day == 7) {
		cout << "Domingo | Septimo dia | Sunday";
	} else { // De lo contrario ( No se ingreso ningun numero del dia de la semana
		cout << "Dia invalido"; // False & MSJ
	}
	return 0;
}

