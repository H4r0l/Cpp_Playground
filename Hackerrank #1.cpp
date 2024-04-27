#include <iostream>

using namespace std;

// Max function gets included in C++ in the standard library as a function call
int max_of_four(int a, int b, int c, int d)
{
    int greater = 0;
    int maxOfAb = max(a, b);
    int maxOfCd = max(c, d);
    greater = max(maxOfAb, maxOfCd);
    return greater;
}
int main()
{
    int fInput, sInput, tInput, lInput;
    
    cin >> fInput >> sInput >> tInput >> lInput;
    
    cout <<max_of_four(fInput, sInput, tInput, lInput);
    
}