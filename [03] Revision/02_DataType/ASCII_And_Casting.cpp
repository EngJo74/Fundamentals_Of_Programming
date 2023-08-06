/*
- Data Types
--- ASCII
--- Implicit Conversion
*/

#include <iostream>
using namespace std;
const char nl = '\n';
int main()
{
  char num = '0';
  cout << int(num) << nl; // 48

  char num1 = '1';
  cout << int(num1) << nl; // 49

  char num2 = '9';
  cout << int(num2) << nl; // 57

  cout << "=======================" << nl;

  cout << '9' << nl;
  cout << sizeof('9') << nl;
  cout << 9 << nl;
  cout << sizeof(9) << nl;

  // TO convert '9' char to 9 int
  cout << "Converted: " << '9' - '0' << nl;
  cout << sizeof('9' - '0') << nl; // int ==> 4

  cout << "=======================" << nl;

  char a = 'O';
  char b = 'J';

  cout << a << " , " << b << "\n";
  cout << int(a) << " , " << int(b) << "\n";
  cout << a + b << "\n";
  cout << int(a + b) << "\n";

  cout << "=======================" << nl;

  char c = 79;
  // cant use int as a char , compiler will convert int to char automatically
  // 79 will converted to 'O'
  char d = 74;
  // same
  // 74 will converted to 'j'

  cout << c << " , " << d << "\n";
  cout << int(c) << " , " << int(d) << "\n";
  cout << c + d << "\n";
  cout << int(c + d) << "\n";

  cout << "=======================" << nl;

  // Implicit Conversion

  int x = 10;   // integer x
  char y = 'a'; // character c

  // y implicitly converted to int. (ASCII)
  // ASCII of 'a' is 97
  x += y; // x = 10 + int('a') ---> x = 10 + 97 = 107

  // x is implicitly converted to float
  float z = x + 1.5; // z = 107 + 1.5 = 108.5

  cout<< "x = " << x << endl
      << "y = " << y << endl
      << "z = " << z << endl;
  return 0;
}
