/*
- Variables
--- Literals in Variables
*/
#include <iostream>
using namespace std;
int main()
{
    long long int numOne = 5000;
    cout << sizeof(numOne) << "\n";
    cout << sizeof(5000) << "\n";
    cout << sizeof(5000ll) << "\n";
    /*
    75         // int
    75u        // unsigned int
    75l        // long
    75ul       // unsigned long
    75lu       // unsigned long
    */
    // With floating number --> l --> long double
    /*
    f or F	float
    l or L	long double
    */
    cout << sizeof(5000.5l) << "\n";
    cout << sizeof(5000.5f) << "\n";
}