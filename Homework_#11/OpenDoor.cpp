#include <iostream>
#include "conio.h"
#include <string>

using namespace std;

int main()
{       
        cout << "Iterador Simple" << endl;
        cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C\n";    

		int i = 0; // declarar variable
		int combinacion; // declarar variable

		// i++ 
		// i = i + 1; 	
		
		for (i = 0; i < 3; i++) // iterar 3 veces para probar 3 combinaciones
		{
				cout << "ingrese combinacion " << i + 1 << endl; // imprimir el valor de i + 1 para que empiece en 1
				cin >> combinacion; // Asignar valor int por usuario

				if (combinacion == 10) // Evaluar si el valor de combinacion es igual a 10
				{
						cout << "abir puerta" << endl; // Imprimir abir puerta
				}
		}

		do // iterar 3 veces para probar 3 combinaciones
		{

			cout << "ingrese combinacion " << i + 1 << endl; // imprimir el valor de i + 1 para que empiece en 1
			cin >> combinacion; // Asignar valor int por usuario

			if (combinacion == 10) // Evaluar si el valor de combinacion es igual a 10
			{						
				cout << "abir puerta" << endl; // Imprimir abir puerta
			}

			i = i + 1; // incrementar el valor de i

		} while (i < 3); // iterar 3 veces para probar 3 combinaciones


		while (i < 3) // iterar 3 veces para probar 3 combinaciones
		{
				cout << "ingrese combinacion " << i + 1 << endl; // imprimir el valor de i + 1 para que empiece en 1
				cin >> combinacion; // Asignar valor int por usuario

				if (combinacion == 10) // Evaluar si el valor de combinacion es igual a 10
				{
						cout << "abir puerta" << endl; // Imprimir abir puerta
				}

				i++; // incrementar el valor de i en 1

		}

		system("pause"); // Pausar el programa para que el usuario pueda ver el resultado
		
        return 0;
}