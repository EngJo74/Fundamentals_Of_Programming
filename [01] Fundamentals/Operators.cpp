
/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Arithmetic Operators
  "For Mathematical Operations"

  --- + => Addition
  --- - => Subtraction
  --- * => Multiplication
  --- / => Division
  --- % => Modulo => Remainder After Division

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator
*/

#include <iostream>
using namespace std;

int main()
{
    cout << 10 + 10 << "\n";              // 20
    cout << sizeof(10 + 10) << "\n";      // 4
    cout << 10.5f + 9.5f << "\n";         // 20
    cout << sizeof(10.5f + 9.5f) << "\n"; // 4
    cout << int(10.5 + 9.5) << "\n";      // 20
    cout << "====================\n";
    cout << sizeof(10.5 + 9.5) << "\n";      // 8
    cout << sizeof(int(10.5 + 9.5)) << "\n"; // 4

    cout << 100 - 50 << "\n";
    cout << 100 - -50 << "\n";

    cout << 10 * 5 << "\n";

    cout << 20 / 5 << "\n";
    cout << 12 / 5 << "\n";
    cout << 12.f / 5 << "\n";

    cout << 20 % 5 << "\n"; // 0
    cout << 21 % 5 << "\n"; // 1
    cout << 24 % 5 << "\n"; // 4
    // cout << 24.5 % 5 << "\n"; // Problem --> we will use pow() later

    return 0;
}

/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Assignment Operators
  "For Assigning Operations"

  --- = Assign
  --- += Addition
  --- -= Subtraction
  --- *= Multiplication
  --- /= Division
  --- %= Modulo => Remainder After Division
*/

#include <iostream>
using namespace std;

int main()
{
    cout << 4 % 2 << "\n";  // 0
    cout << 6 % 2 << "\n";  // 0
    cout << 8 % 2 << "\n";  // 0
    cout << 11 % 2 << "\n"; // 1

    int a = 10;
    // a = a + 10;        // a = 10 + 10 = 20
    a += 10; // a = 10 + 10 = 20
    // a = a + 10
    // a += 10
    cout << a << "\n"; // 20

    int b = 20;
    // b = b - 10; // b = 20 - 10 = 10
    b -= 10; // b = b - 10
    cout << b << "\n";

    int c = 5;
    // c = c * 10; // c = 5 * 10 = 50;
    c *= 10; // c = c * 10
    cout << c << "\n";

    return 0;
}

/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Increment And Decrement Operators
  "For incrementing And Decrementing Values"

  --- Pre/Post Increment
  --- Pre/Post Decrement
*/

#include <iostream>
using namespace std;

int main()
{
    int likes = 0;
    cout << likes-- << "\n"; // 0
    cout << likes << "\n";   // -1

    int views = 0;
    cout << --views << "\n"; // -1
    cout << views << "\n";   // -1
    return 0;
}

/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Comparison Operators
  "For Comparing Values"

  --- == Equal
  --- != Not Equal
  --- > Greater Than
  --- < Less Than
  --- >= Greater Than Or Equal
  --- <= Less Than Or Equal
*/

#include <iostream>
using namespace std;

int main()
{
    cout << (10 == 10) << "\n";    // 1 => True
    cout << (1000 == 100) << "\n"; // 0 => False

    cout << (10 != 10) << "\n";    // 0 => False
    cout << (1000 != 100) << "\n"; // 1 => True

    cout << (40 > 18) << "\n"; // 1 => True
    cout << (18 > 18) << "\n"; // 0 => False

    cout << (16 < 18) << "\n"; // 1 => True

    cout << (40 >= 18) << "\n"; // 1 => True
    cout << (18 >= 18) << "\n"; // 1 => True
    return 0;
}

/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Logical Operators
  "For Logic Between Values"

  --- && And
  --- || Or
  --- ! Not
*/

#include <iostream>
using namespace std;

int main()
{
    // int age = 20;
    // int points = 800;
    // cout << (age >= 18 && points >= 500) << endl; // 1 => True

    // int age = 16;
    // int points = 800;
    // cout << (age >= 18 && points >= 500) << endl; // 0 => False

    // int age = 16;
    // int points = 800;
    // cout << (age >= 18 || points >= 500) << endl; // 1 => True

    // int age = 16;
    // int points = 450;
    // cout << (age >= 18 || points >= 500) << endl;                    // 0 => False
    // cout << (100 == 10 || 50 == 10 || 20 == 10 || 10 == 10) << endl; // 1 => True

    cout << (10 == 10) << endl;   // 1 => True
    cout << !(10 == 10) << endl;  // 0 => False
    cout << !(100 == 10) << endl; // 1 => True

    return 0;
}

/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Operators Precedence
  "Which One Has Higher Precedence"

  Refernce
  --- Operators Precedence Table

  Search
  - Bitwise Operators
  - Spaceship Operator

  Training
  - Try Operators Yourself Before Browsing References
*/

#include <iostream>
using namespace std;

int main()
{
    cout << 10 + 5 * 5 << "\n";
    // 5 * 5 = 25
    // 10 + 25 = 35
    cout << 10 - 5 * 5 << "\n";
    // 5 * 5 = 25
    // 10 - 25 = -15
    cout << 20 / 5 * 4 << "\n";
    // 20 / 5 = 4
    // 4 * 4 = 16
    cout << 10 + 20 / 5 * 4 << "\n";
    // 10 + 16 = 26
    // 20 / 5 = 4
    // 4 * 4 = 16
    cout << (10 + 5) * 5 << "\n"; // (15) * 5 = 75
    return 0;
}
