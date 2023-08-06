#include <iostream>
using namespace std;
int main ()
{
    int age = 40;
int points = 100;

if (age > 18 && points > 50 && sizeof(age) == 4)
{
    cout << "Age Is Ok\n";
    cout << "Points Is Ok\n";
    cout << "Age Data Is 4 Bytes\n";
}
}
