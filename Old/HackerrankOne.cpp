#include <iostream>
#include <cstring> // for std::trim()

using namespace std;

string numberToWord(int n) {
  // Array to store number names (1 to 9)
  string words[] = {"one", "two", "three", "four", "five", 
                   "six", "seven", "eight", "nine"};
  
  return words[n - 1];
}

void numberClassification(int a, int b) {
  for (int n = a; n <= b; n++) {
    if (1 <= n && n <= 9) {
      // Print English representation for numbers 1 to 9
      cout << numberToWord(n) << endl;
    } else {
      // Print even/odd for numbers greater than 9
      if (n % 2 == 0) {
        cout << "even" << endl;
      } else {
        cout << "odd" << endl;
      }
    }
  }
}

int main() {
  int a, b;
  
  // Get input values
  cin >> a >> b;
  
  // Call the function to classify numbers
  numberClassification(a, b);
  
  return 0;
}