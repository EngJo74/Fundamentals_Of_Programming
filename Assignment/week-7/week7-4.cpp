#include <iostream>
using namespace std;

int main()
{
    // Method 1
    for (int i = 0; i < 20; i += 2)
    {
        if (i == 10 || i == 12)
            continue;
        cout << i << "\n";
    }

    cout << "=================\n";

    // Method 2
    int i = 0;
    while (i < 20)
    {
        if (i < 10 || i > 12)
        {
            cout << i << "\n";
        }
        i += 2;
    }

    return 0;
}