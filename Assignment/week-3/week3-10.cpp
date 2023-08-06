#include <iostream>
using namespace std;
int main()
{
    // Add Type Alias Here
    using lli = long long int; // Method 1
    typedef long long int lli; // Method 2

    // Do Not Edit
    lli num = 150050005; // This Is Long Long Int
    cout << num << "\n"; // 150050005
    return 0;
}