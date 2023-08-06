#include <iostream>
using namespace std;

int main()
{
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    cout << sizeof(c) - sizeof(b) << "\n";    // 12   => 16 - 4
    cout << sizeof(c) + sizeof(b) << "\n";    // 20   => 16 + 4
    cout << sizeof(c) * sizeof(a) << "\n";    // 32   => 16 * 2
    cout << int(c) * a << "\n";               // 5000 => 5 * 1000
    cout << char( sizeof(c) * int(c) ) << "\n"; // P  => ASCII for (5*16) = 80 'P'
    return 0;
}