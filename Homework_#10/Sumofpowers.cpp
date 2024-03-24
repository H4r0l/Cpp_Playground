#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "Suma de potencias" << endl;
    cout << "Autor: Harol Urrea | Codigo 1804606 |\nMecatronica C" << endl;

    int sum = 0, power = 0, n;

    cout << "Digite el numero de elementos a sumar: "; cin >> n;

    for (int i = 1; i <= n; i++) {
        power = pow(2, i);
        sum += power;
    }

    cout << "\nLa suma es: " << sum;

    system("pause");
    
    return 0;
}