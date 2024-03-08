#include <iostream>

using namespace std;

string reverseWord(string word){
    string reversed = ""; // declares empty string to store result
    for(int i = 0; i < word.length(); i++){ // iterates over the string givem
        reversed += word[word.length() - 1 - i];  // appends each character to the string reversed in reverse order 
        // i.e. if word is "hello" then reversed will be "olleh" after the loop
        // reversed += word[word.length() - 1 - i]; is equivalent to reversed = reversed + word[word.length() - 1 - i];
    }
    return reversed;
}

int main(){
    string word;

    cout << "Enter a word: "; cin >> word;

    cout << "the reversed word is: " << reverseWord(word);
}