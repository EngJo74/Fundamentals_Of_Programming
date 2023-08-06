#include <iostream>
#include <array>
using namespace std;

int main()
{
    int vals[] = {100, 200, 600, 200, 100};
    int sizearr = sizeof(vals) / sizeof(vals[0]); // 5

    // Method 1
    // if (vals[0] == vals[sizearr - 1] && vals[1] == vals[sizearr - 2])
    // {
    //     cout << "Array Is Palindrome\n";
    // }
    // else
    // {
    //     cout << "Array Is Not  Palindrome\n";
    // }

    // Method 2 (in general)
    int check = 0;
    for (int i=0 ; i < int (sizearr / 2) ; i++)
    {
        if (vals[i] == vals[sizearr - (i+1)])
        {
            check++;
        }
        
    }
    if (check == int (sizearr / 2) )
    {
        cout << "Array Is Palindrome\n";
    }
    else
    {
        cout << "Array Is Not  Palindrome\n";
    }
    return 0;
}