/*
- Data Types
--- typeid
----- Using with conditions
*/
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int a = 0;
    float b = 0.0;
    if (typeid(a) == typeid(b))
    {
        cout << "a and b are of the Same type:\n";
        cout << "a is: " << typeid(a).name() << '\n';
        cout << "b is: " << typeid(b).name() << '\n';
    }
    else if (typeid(a) != typeid(b))
    {
        cout << "a and b are of different types:\n";
        cout << "a is: " << typeid(a).name() << '\n';
        cout << "b is: " << typeid(b).name() << '\n';
    }
    return 0;
}