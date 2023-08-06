/*
- Variables
--- Constant
*/
#include <iostream>
using namespace std;
const int num1 = 100;
const char newline = '\n';
const char tab = '\t';
int main ()
{
    cout << num1 << newline; 
    // num1 = 200; // Error it's constant --> Cannot Update Value
    cout << num1 << newline; 

    cout << "======================" << newline;
    cout << num1 << tab << num1;
}