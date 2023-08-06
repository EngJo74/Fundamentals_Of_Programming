/*
  Data Types
  - What Is Data ?
  - Data Examples In Real Life
  --- Integer => 5000, 10, -100
  --- String => "Elzero Web School", "Osama Elzero", "100A"
  --- Boolean => true, false
  --- Float => 18.5, 1900.50
  --- Array => ["Osama", "Ahmed", "Sayed", "Mahmoud"]
  - Why We Choose Data ?
  --- Size
  --- Operation

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator

  X + Y = R
  X,Y : operand
  R : result
  = : operator
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    string name = "Osama";
    bool status = true;

    int num_one = 100;
    int num_two = 20;

    cout << sizeof(num) << "\n";
    cout << sizeof(name) << "\n";
    cout << sizeof(status) << "\n";

    cout << num_one / num_two; // 100 / 20 = 5
    // cout << num_one / name; // Error

    return 0;
}

/*
  Data Types

  - Ram [R]andom [A]ccess [M]emory
  --- Computer Memory Has Locations

  - Data Sizes
  --- Bit => [Bi]nary Digi[t] => Smallest Unit in Storage Store Only 0 Or 1
  --- Byte => A Group of 8 => Store Single Character
  --- Kilo Byte => 1024 Byte
  --- Mega Byte => 1024 Kilobytes
  --- Giga Byte => 1024 Megabytes
  --- Tera Byte => 1024 Gigabytes

  - Data Types With Size
  --- int => 2 Or 4 Bytes => Will Cover Later Why
  --- float => 4 Bytes [18.5656565656]
  --- double => 8 Bytes [18.5656565656]
  ------ Number . Fractional Component
  --- char => 1 Byte => "A" "x" "9"
  --- boolean => 1 Byte => true, false
  - Double vs Float

  - The Story Behind Creating A Variable
  --- Declare A Variable
  --- Tell Computer That We Need To Reserve X Bytes Of Memory Depend On Data Type
  --- Restrict Type Of Data To The Type We Choosed

  - Declare Variable Without Type
  - See Memory Address &

  - Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
*/

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    cout << setprecision(13);
    float fl = 10.1234567891;
    cout << fl << "\n";
    double dob = 10.1234567891;
    cout << dob << "\n";
    auto num = 10;
    cout << num << "\n";
    int nums = 100;
    cout << &nums;
    return 0;
}

/*
  Primitive Data Types
  - int => Integer
  --- Test Numbers
  --- Test Floating Point vs Int
  --- Store From -2147483648 To 2147483647
  --- INT_MIN and INT_MAX Constants
  --- Check Limits Header File limits.h
  --- Test Size Of Data Types Without Variables & Use End Line

  - = Assignment Operator
*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int num_one = 100;
    int num_two = -500;
    int num_three = 0;
    int num_four = true;
    // int num_five = "Elzero"; // Problem
    cout << num_one << endl;
    cout << num_two << endl;
    cout << num_three << endl;
    cout << num_four << endl;

    cout << INT_MIN << endl;
    cout << INT_MAX << endl;

    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(bool) << endl;

    int last_num = 10.5;
    cout << last_num << endl;
    return 0;
}

/*
  Primitive Data Types
  - float => Floating Point Number
  --- Test Integer Value In Float Variable
  --- We Make Sure Its Float Not Double By Adding Suffix "f" Or "F"
  --- Test With Auto
  --- 7 Decimal Precision

  - double => Double The Float
  --- 15 Decimal Precision
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    num = 20.5;
    cout << sizeof(num) << endl; // 4
    cout << num << endl;         // 20

    double dob = 10;
    dob = 20.5;
    cout << sizeof(dob) << endl; // 8
    cout << dob << endl;         // 20.5

    float fl = 10.5f + 9.5f;
    cout << sizeof(fl) << endl; // 4
    cout << fl << endl;         // 20

    auto mix = 10.f;

    return 0;
}

/*
  Primitive Data Types
  - char => Character
  --- Added Inside Single Quotes => Test With Auto
  --- ASCII Value
  --- ASCII => American Standard Code for Information Interchange.
  --- A Way of Representing Characters As Numbers

  --- Search For Type Casting
  --- Create App To Convert ASCII To Character
  --- Create App To Convert Character To ASCII
*/

#include <iostream>
using namespace std;

int main()
{
    char a = 'A';
    cout << sizeof(a) << "\n"; // 1

    auto b = 'B';
    cout << sizeof(b) << "\n"; // 1

    auto c = "C";
    cout << sizeof(c) << "\n"; // 8

    char d = 'Z';
    cout << int(d) << "\n"; // 90

    cout << int('%') << "\n"; // 37
    cout << int('(') << "\n"; // 40
    cout << int(')') << "\n"; // 41

    // cout << int("Z") << "\n"; // Error

    cout << char(81) << "\n"; // Q

    return 0;
}

/*
  Primitive Data Types

  - bool => Boolean
  --- Only Two Possible Values [true, false]
  --- Value Is Case Sensitive
  --- When We Use Boolean Values
  ------ Anything Has On/Off, Yes/No, True/False
  --- Test Boolean In Math
  --- Test > And <
  --- Test Data [100, 0, -100, ""]

  - void => Valueless
  --- Without Value
*/

#include <iostream>
using namespace std;

void without_value()
{
    // Nothing To Return
}

int main()
{
    bool is_open = true;
    cout << is_open + 10 << endl;        // 1 + 10 = 11
    cout << true + true + false << endl; // 1 + 1 + 0 = 2
    bool test_one = 10 > 5;              // Yes => True => 1
    bool test_two = 10 > 100;            // No => False => 0
    cout << test_one << endl;            // 1
    cout << test_two << endl;            // 0
    int num = 1;
    cout << sizeof(test_one) << endl; // 1 Byte
    cout << sizeof(num) << endl;      // 4 Bytes
    bool num_one = 100;
    bool num_two = -100;
    bool num_three = 0;
    cout << num_one << endl;   // 1
    cout << num_two << endl;   // 1
    cout << num_three << endl; // 0
    return 0;
}

/*
  Primitive Data Types
  - Modifiers
  --- Modify The Length Of Data => See Limits

  ----- ٍSigned [int, char]
  -------- Store Positive, Negative Integers And 0
  -------- int Is Signed By Default

  ----- Unsigned [int, char]
  -------- Store Positive Only

  ----- Short [int]
  -------- Can Be short Instead of short int

  ----- Long [int, double]
  -------- Store Maximum Value
  -------- Can Be long Instead of long int

  - Type Alias
  --- using identifier = type;
  --- typedef unsigned long UL;
*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int age = 300;
    cout << sizeof(age) << "\n"; // 4 Bytes

    short int new_age = 300;
    cout << sizeof(new_age) << "\n"; // 2 Bytes

    short last_age = 300;
    cout << sizeof(last_age) << "\n"; // 2 Bytes

    cout << sizeof(short int) << "\n";//2
    cout << sizeof(short) << "\n";//2
    cout << sizeof(long int) << "\n";//4
    cout << sizeof(long) << "\n";//4
    cout << sizeof(long long int) << "\n";//8
    cout << sizeof(long long) << "\n";//8

    int num_one = 100;
    cout << num_one << "\n";

    signed int num_two = 0;
    cout << num_two << "\n";

    unsigned int num_three = 100;
    cout << num_three << "\n";

    // unsigned int num_four = -10; // Problem
    // cout << num_four << "\n";

    // using bignum = long long int;

    typedef long long int bignum;

    bignum my_number = 100010001000;
    cout << my_number << "\n";

    return 0;
}

/*
  Data Types
  - Type Conversion
  --- Convert Data of One Type To Another

  - Implicit Conversion
  --- Conversion Is Done Automatically By The Compiler

  - Explicit Conversion AKA Type Casting
  --- Conversion Is Done By The Programmer

  - Data Loss
  --- When Larger Type Is Converted To Smaller Type
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "=====================\n";
    int a;
    double b = 20.5;
    a = b;                     // Compiler Will Convert Double Value Then Assign
    cout << a << "\n";         // 20
    cout << sizeof(a) << "\n"; // 4 Bytes
    cout << "=====================\n";

    cout << "=====================\n";
    char c = 'C';
    int d = 20;
    cout << int(c) << "\n"; // 67
    cout << c + d << "\n";  // 67 + 20 = 87
    cout << "=====================\n";

    cout << "=====================\n";
    int e = 20;
    double f = 20.5;
    cout << e + f << "\n";         // 20.5 + 20 = 40.5
    cout << sizeof(e + f) << "\n"; // 8 Bytes
    cout << "=====================\n";

    cout << "=====================\n";
    int g = 20;
    double h = 20.5;
    cout << g + (int)h << "\n";         // 20 + 20 = 40
    cout << g + int(h) << "\n";         // 20 + 20 = 40
    cout << sizeof(g + (int)h) << "\n"; // 4 Bytes
    cout << sizeof(g + int(h)) << "\n"; // 4 Bytes
    cout << "=====================\n";
    return 0;
}
