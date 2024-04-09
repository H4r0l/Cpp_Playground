#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";

	int NA,F=0,M=0,C=1; // variables

	int NAI=0;   // variable para numero de alumnos iterado

	char GN;     // variable

	cout << "Punto 5\n"; 
	cout << "Bienvenido a la Universidad Militar Nueva Granada\n";
	cout << "Digite el numero de alumnos\n"; // MSJ
	cin >> NA; // Asignar valor int por usuario 
	cout<<"acontinuacion va a digitar el sexo de cada alumno\nRefiriendose por\nMASCULINO\nFEMENINO"<<endl;
	
    do{ // Ciclo para iterar el numero de alumnos
		NA--; // Decrementar 
		NAI++; // Incrementar
		cout << "alumno "<<NAI; // MSJ para mostrar el numero de alumno
		cout << "\nGenero?\n"; // MSJ para mostrar el genero
		cin >> GN; // Asignar valor char por usuario
		if(GN=='F'){F++;} // Evaluar si el genero es femenino
	    if(GN=='M'){M++;} // Evaluar si el genero es masculino
	} while(NA>0); // Ciclo para iterar el numero de alumno

	cout << "de los "<<NAI<<" alumnos\n"; // MSJ para mostrar el total de alumnos
	cout<<F<<"  Son mujeres\n"; // MSJ para mostrar el total de mujeres
	cout<<M<<"  Son hombres\n"; // MSJ para mostrar el total de hombres
	
    return 0;
}