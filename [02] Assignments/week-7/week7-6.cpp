#include <iostream>
using namespace std;

int main()
{
    // Method 1
    int result = 10;
    for (int i = 0; i < 4; i++)
    {
        cout << result << "\n";

        result *= result;
    }

    cout << "=================\n";

    // Method 2
    result = 10;
    int j = 0;
    while (j < 4)
    {
        cout << result << "\n";
        result *= result;
        j++;
    }
    return 0;
}