#include <iostream>
#include <string>

using namespace std;

void invertido(int& num) {
  string number = to_string(num);
  string reversed = "";

  for (int i = number.length() - 1; i >= 0; i--) {
    reversed += number[i];
  }

  num = stoi(reversed); // Modify the original variable through reference
}

int main() {
  int a = 36;
  invertido(a); // Pass a by reference
  cout << a << endl; // Now a will be modified to the inverted value
  return 0;
}
