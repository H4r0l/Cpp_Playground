#include <iostream>
#include <cmath>

using namespace std;

string decimalBinario(int decimal) {
    string binario = "";
    while (decimal > 0) {
        binario = to_string(decimal % 2) + binario; // Convert int to string
        decimal = decimal / 2;
    }
    return binario;
}

int decimalOctal(int decimal) {
    int octal = 0, rem, i = 1;
    while (decimal > 0) {
        rem = decimal % 8;
        octal += rem * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}

int decimalHexadecimal(int decimal) {
    int hexadecimal = 0, rem, i = 1;
    while (decimal > 0) {
        rem = decimal % 16;
        hexadecimal += rem * i;
        decimal /= 16;
        i *= 10;
    }
    return hexadecimal;
}

int binarioDecimal(int binario) {
    int decimal = 0;
    int i = 0;
    while (binario > 0) {
        decimal = decimal + (binario % 10) * pow(2, i);
        binario = binario / 10;
        i++;
    }
    return decimal;
}

int octalDecimal(int octal) {
    int decimal = 0, i = 0, n;
    while (octal > 0) {
        n = octal % 10;
        decimal += n * pow(8, i);
        octal /= 10;
        i++;
    }
    return decimal;
}

int hexadecimalDecimal(string hex) {
  int decimalValue = 0;
  int base = 1;

  for (int i = hex.length() - 1; i >= 0; i--) {
    int digitValue;

    if (hex[i] >= '0' && hex[i] <= '9') {
      digitValue = hex[i] - '0';
    } else if (hex[i] >= 'A' && hex[i] <= 'F') {
      digitValue = 10 + hex[i] - 'A';
    } else {
      cout << "Invalid hexadecimal number" << endl;
      return 0;
    }
    base = base * 16;
    decimalValue += digitValue * base;

  }

  return decimalValue;
}

int main(){
    int input = 0;
    string stringInput = "";
    int opcion = 0;
    cout << "1. Decimal a binario\n2. Decimal a octal\n3. Decimal a hexadecimal\n4. Binario a decimal\n5. Octal a decimal\n6. Hexadecimal a decimal\n7. Salir\n\n";
    cin >> opcion;
    switch (opcion){
        case 1:
            cout << "Ingresa un decimal: ";
            cin >> input;
            cout << decimalBinario(input) << "\n";
            break;
        case 2:
            cout << "Ingresa un decimal: ";
            cin >> input;
            cout << decimalOctal(input) << "\n";
            break;
        case 3:
            cout << "Ingresa un decimal: ";
            cin >> input;
            cout << decimalHexadecimal(input) << "\n";
            break;
        case 4:
            cout << "Ingresa un binario: ";
            cin >> input;
            cout << binarioDecimal(input) << "\n";
            break;
        case 5:
            cout << "Ingresa un octal: ";
            cin >> input;
            cout << octalDecimal(input) << "\n";
            break;
        case 6:
            cout << "Ingresa un hexadecimal: ";
            cin >> input;
            cout << hexadecimalDecimal(stringInput) << "\n";
            break;
        case 7:
            cout << "Bye!\n";
            break;
        default:
            cout << "Opcion invalida\n";
            break;

    }
}