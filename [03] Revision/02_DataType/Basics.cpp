/*
- Data Types
--- Primitive Data Types
*/
#include <iostream>
#include <string>
using namespace std;
const char nl = '\n';
int main()
{
    int a = 1;
    char b = '1';
    string c = "1";
    bool d = 1;

    cout << a << nl;
    cout << sizeof(a) << nl << nl;

    cout << b << nl;
    cout << sizeof(b) << nl << nl;
    
    cout << c << nl;
    cout << sizeof(c) << nl << nl;
    
    cout << d << nl;
    cout << sizeof(d) << nl;

    cout << "====================" << nl;

    cout << b / a << nl; 
    // b ia s char not a number
    // compiler will convert char to ASCII val
    // int ('1') = 49 , in this moment a,b has same data type ,then we can devide b by a
    // 49 / 1 = 49

    int num1 = 5;
    float num2 = 26;
    cout << num2 / num1 << nl; // float / int = float

    // cout << a / c << nl; // Error --> a,c don't have same data type

    cout << "====================" << nl;

    int test =150.50;
    float test2 = 150.50;
    cout << test / test2 << nl; // Not equal 1

    cout << "====================" << nl;

    auto num3 = 100.5;
    cout << num3 << " , Its Size: " << sizeof(num3) << nl;
    auto num4 = 100.5f;
    cout << num4 << " , Its Size: " << sizeof(num4) << nl;
    auto num5 = 100;
    cout << num5 << " , Its Size: " << sizeof(num5) << nl;
    auto num6 = 100ll;
    cout << num6 << " , Its Size: " << sizeof(num6) << nl;

    cout << "====================" << nl;

    cout << INT_MIN << endl;
    cout << INT_MAX << endl;

    cout << "====================" << nl;

    cout << sizeof(int) << nl;
    cout << sizeof(char) << nl;
    cout << sizeof(float) << nl;
    cout << sizeof(double) << nl;
    cout << sizeof(bool) << nl;
    cout << sizeof(string) << nl;

}