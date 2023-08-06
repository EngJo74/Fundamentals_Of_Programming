#include <iostream>
using namespace std;
int pow (int x, int y)
{
    int counter = 0;
    int result = 1;
    while(true)
    {
        if (counter < y)
        {
            result *= x;   // cout << result << "\n";
            counter++;
        }
        else
        {
            break;
        }
    }
        return result;
}
int main()
{
    cout << pow(2, 5); // 32
    return 0;
}