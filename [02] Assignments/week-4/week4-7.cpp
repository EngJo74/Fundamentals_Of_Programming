#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    int result = ((a + b) * (a + b) + (a * a)) * a;
    /*
    a = 10
    num * 10 = 10000 => num = 1000
    needed --> (a + b * a + b + a * a) = 1000
    last a*a = 100 --> num + a*a = 1000 ==> num = 900
    a + b = 30 ==> 30*30 = 900
    */  

    cout << result << "\n";

    return 0;
}