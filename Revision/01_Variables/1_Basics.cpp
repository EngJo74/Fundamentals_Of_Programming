/*
- Variables
--- Basics
*/
#include <iostream>
using namespace std;
int main()
{
    int val = 500;
    cout << val << "\n";
    val = 400;
    cout << val << "\n";
    // int val =200; // Error --> redeclarition
    // cout << val ;
    cout << "===================\n";

    int val2;
    val2 = 150;
    cout << val2 << "\n";
    cout << "val2" << "\n";

    cout << "===================\n";

    int a, b, c;
    a = b = c = 50;
    cout << a << " " << b << " " << c << "\n";

    return 0;
}