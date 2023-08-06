#include <iostream>
using namespace std;
int main()
{
    double salary = 5000.98;

    cout << sizeof(salary) << " Bytes" << endl;      // 8 Bytes
    cout << sizeof(salary) * 8 << " Bites" <<endl;  // 64 Bits
}

