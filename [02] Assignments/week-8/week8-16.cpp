#include <iostream>
using namespace std;

// Write Your Function Here
int books (int small, int medium, int large, int shelfs)
{
    int result = small * 2 + medium * 4 + large * 6 , remainSpaces;
    if (result < shelfs * 20)
    {
        remainSpaces = shelfs*20 - result;
    }
    else 
    {
        return 0;
    }
    return remainSpaces;
}
int main()
{
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    return 0;
}