#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;

    // Using ASCII Value Table
    char e = d - a;
    char w = d + c;
    char s = d + b;

    cout << e << w << s;
    return 0;
}

/*
Output Needed
"EWS"
*/