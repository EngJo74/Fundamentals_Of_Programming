#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 10, 40, 50};
    vector<int>::iterator iter = numbers.begin();

    for (;;)
    {
        if ( iter < numbers.end() )
        {
            cout << *iter << "\n";
            iter++;
        }
        else
            break;
    }

    return 0;
}