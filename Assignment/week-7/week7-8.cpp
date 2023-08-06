#include <iostream>
using namespace std;

int main()
{
    // Method 1
    for (int i = 2; i < 130; i = i * 2 + 2)
    {
        cout << i << "\n"; //
    }

    cout << "=================\n";

    // Method 2
    int i = 2;
    while (i < 130)
    {
        cout << i << "\n";
        i = i * 2 + 2;
    }

    return 0;
}