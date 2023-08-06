#include <iostream>
#include <array>
using namespace std;

int main()
{
    int vals[]{100, 200, 250, 400, 200};
    int lastnum = size(vals) - 1;
    int middlenum = int(size(vals) / 2);

    if (vals[0] + vals[lastnum] > vals[middlenum])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number\n";
        cout << vals[0] << " + " << vals[lastnum] << " = " << vals[0] + vals[lastnum] << "\n";
        cout << vals[0] + vals[lastnum] << " > " << vals[middlenum] << "\n";
    }
    else if (vals[1] + vals[lastnum-1] > vals[middlenum])
    {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number\n";
        cout << vals[1] << " + " << vals[lastnum-1] << " = " << vals[1] + vals[lastnum-1] << "\n";
        cout << vals[1] + vals[lastnum-1] << " > " << vals[middlenum] << "\n";
    }
    else
    {
        cout << "Middle Number Is The Largest\n";
        cout << vals[middlenum];
    }

    return 0;
}