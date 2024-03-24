#include <iostream>

using namespace std;

int main() {
    int num, positivos = 0, negativos = 0, ceros = 0, suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        } else {
            ceros++;
        }

        suma += num;
    }
    cout << "Hay " << positivos << " numeros positivos, " << negativos << " numeros negativos y " << ceros << " ceros en la suma. La suma total es " << suma << ".";

    return 0;
}