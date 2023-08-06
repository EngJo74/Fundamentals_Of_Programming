#include <iostream>
using namespace std;

int main()
{
    // Method 1
    for (int i = 0; i < 30; i += 3)
    {
        cout << i << "\n";
    }

    cout << "=================\n";

    // Method 2
    int i = 0;
    while (i < 30)
    {
        cout << i << "\n";
        i += 3;
    }

    return 0;
}