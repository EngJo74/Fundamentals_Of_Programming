/*
Function
- DRY
- User Defined and Built-In
- Syntax

returnDataType functionName(Param1, Param2, Param3)
{
    // Function Body Contain Block Of Code
}

- Example
- Why We Use Functions
- Declare A Function And Call It
*/

#include <iostream>
using namespace std;

void sayHello()
{
    cout << "Hi Osama.\n";
}

int main()
{

    cout << "Hi Ahmed.\n";
    cout << "Hi Sayed.\n";
    return 0;
}

/*
Function
- Parameters & Arguments
*/

#include <iostream>
using namespace std;

void sayHello(string msg, string name, int age)
{
    cout << msg << " " << name << ",\n";
    cout << name << "\'s Age Is: " << age << "\n";
}

int main()
{
    sayHello("Hello", "Osama", 40);
    sayHello("Hi", "Ahmed", 25);
    sayHello("Welcome", "Sayed", 35);
    return 0;
}

/*
Function
- Parameters & Arguments Training
--- Create Ice Box
--- Simple Calculator
*/

#include <iostream>
using namespace std;

void iceBox(string item)
{
    if (item == "Coca Cola")
    {
        cout << item << " Will Be More Cold\n";
    }
    else if (item == "Apple" || item == "Juice")
    {
        cout << item << " Will Be More Fresh\n";
    }
    else
    {
        cout << item << " Is Invalid\n";
    }
}

void calc(int numOne, int numTwo)
{
    cout << numOne << " + " << numTwo << " = ";
    cout << numOne + numTwo << "\n";
}

int main()
{
    iceBox("Coca Cola");
    iceBox("Apple");
    iceBox("Juice");
    iceBox("TV Remote");
    calc(10, 90);
    return 0;
}

/*
Function
- Parameter Default Value
*/

#include <iostream>
using namespace std;

void details(string msg = "Welcome", string name = "Unknown")
{
    cout << msg << " " << name << "\n";
}

int main()
{
    details("Hello", "Ahmed");
    details("Hi");
    details();
    return 0;
}

/*
Function
- Passing Array As Parameter
*/

#include <iostream>
using namespace std;

// void calc(int n1, int n2, int n3)
// {
//   cout << n1 + n2 + n3 << "\n";
// }

void calc(int nums[], int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        result += nums[i];
    }
    cout << "Result Is: " << result << "\n";
}

int main()
{
    // calc(10, 20, 30);

    int arrayOfNumbers[] = {10, 20, 30, 40, 100};
    int numsSize = size(arrayOfNumbers);

    calc(arrayOfNumbers, numsSize);
    return 0;
}

/*
Function
- Return Statement
--- Return vs No Return Examples
--- Return As Value In Variable
--- Main Function Return Test
--- Nothing After Return
--- Void With Return ...! Why ?
*/

#include <iostream>
using namespace std;

void calc(int n1, int n2)
{
    cout << n1 + n2 << "\n";
    return;
    cout << "Will Not Show";
}

// int calc(int n1, int n2)
// {
//   cout << "Operation Is Done\n";
//   return n1 + n2;
//   cout << "Will Not Show";
// }

int main()
{
    calc(10, 20);
    // int result = calc(10, 20);
    // cout << result * 5 << "\n";
    // cout << result + 20 << "\n";
    return 0;
}

/*
Function
- Forward Declaration
*/

#include <iostream>
using namespace std;

int calc(int a, int b);

int main()
{
    // Call
    cout << calc(10, 20);
    return 0;
}

// Declaration
int calc(int a, int b)
{
    return a + b;
}


/*
Function
- Math Functions
--- pow
--- fmod
--- ceil
--- floor
--- round
--- trunc
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << pow(2, 4) << "\n";     // 16
    cout << 2 * 2 * 2 * 2 << "\n"; // 16
    cout << 11 % 2 << "\n";        // 1
    // cout << 11.5 % 2 << "\n";      // Error
    cout << fmod(11.5, 2) << "\n"; // 1.5
    cout << ceil(9.1) << "\n";     // 10
    cout << floor(9.9) << "\n";    // 9
    cout << round(9.5) << "\n";    // 10
    cout << round(9.4) << "\n";    // 9
    cout << round(9.49) << "\n";   // 9
    cout << trunc(9.9) << "\n";    // 9
    cout << trunc(9.5) << "\n";    // 9
    cout << trunc(9.1) << "\n";    // 9
    return 0;
}

/*
Function
- Built-In Functions
--- cctype Functions
------ tolower()
------ toupper()
------ isupper()
------ islower()
------ isspace()

- Create 2 Applications
--- Swap Case App
--- Remove Spaces App
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "A\n";                      // A
    cout << tolower('A') << "\n";       // 97 => ASCII Value
    cout << char(tolower('A')) << "\n"; // a
    cout << char(97) << "\n";           // a
    cout << "=====================\n";
    cout << "b\n";                      // b
    cout << toupper('b') << "\n";       // 66 => ASCII Value
    cout << char(toupper('b')) << "\n"; // B
    cout << char(66) << "\n";           // B
    cout << "=====================\n";

    string nameone = "ElZEro"; // eLzeRO eLzeRO
    int nameoneSize = size(nameone);

    for (int i = 0; i < nameoneSize; i++)
    {
        if (isupper(nameone[i]))
        {
            cout << char(tolower(nameone[i]));
        }
        else
        {
            cout << char(toupper(nameone[i]));
        }
        // cout << nameone[i] << "\n";
        // cout << int(nameone[i]) << "\n";
    }

    cout << "\n=====================\n";

    string nametwo = "E\nl  z  \n\te r\t\no";
    int nametwoSize = size(nametwo);

    for (int i = 0; i < nametwoSize; i++)
    {
        // if (nametwo[i] == ' ')
        // {
        //   continue;
        // }
        if (isspace(nametwo[i]))
        {
            continue;
        }
        cout << nametwo[i];
    }

    return 0;
}

/*
Function
- Built-In Functions
--- Algorithm Header
------ min
------ max
------ count

- Create 3 Applications
--- Find Minimum Number
--- Find Maximum Number
--- Count Number Occurance
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cout << min(10, -20) << "\n";                       // -20
    cout << min(10, 20) << "\n";                        // 10
    cout << min('a', 'c') << "\n";                      // a
    cout << min('a', 'C') << "\n";                      // C
    cout << int('a') << "\n";                           // 97
    cout << int('C') << "\n";                           // 67
    cout << min({10, -20, 30, -100, 100, -50}) << "\n"; // -100
    cout << "=======================\n";
    cout << max(10, -20) << "\n";                       // 10
    cout << max(10, 20) << "\n";                        // 20
    cout << max('a', 'c') << "\n";                      // c
    cout << max('a', 'C') << "\n";                      // a
    cout << int('a') << "\n";                           // 97
    cout << int('C') << "\n";                           // 67
    cout << max({10, -20, 30, -100, 100, -50}) << "\n"; // 100
    cout << "=======================\n";

    int nums[] = {10, -20, 30, -100, 100, -50};
    int numsSize = size(nums);
    int checkMinNum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < checkMinNum)
        {
            checkMinNum = nums[i];
        }
    }

    cout << checkMinNum << "\n";

    cout << "=======================\n";

    int numsTwo[] = {10, 20, 10, 10, 13, 15, 100, 20, 10};
    int numsTwoSize = size(numsTwo);
    int counter = 0;
    int choosenNum = 10;

    for (int i = 0; i < numsTwoSize; i++)
    {
        if (numsTwo[i] == choosenNum)
        {
            counter++;
        }
    }

    cout << choosenNum << " Found " << counter << " Times";

    return 0;
}

/*
Function
- Function Overloading
--- Number And/Or Type Of Params Is Different
*/

#include <iostream>
using namespace std;

void print(int a, int b)
{
    cout << "Number One Is: " << a << "\n";
    cout << "Number Two Is: " << b << "\n";
}

void print(int a, int b, int c)
{
    cout << "Number One Is: " << a << "\n";
    cout << "Number Two Is: " << b << "\n";
    cout << "Number Three Is: " << c << "\n";
}

void print(string a, string b)
{
    cout << "Text One Is: " << a << "\n";
    cout << "Text Two Is: " << b << "\n";
}

int main()
{
    print(10, 20);
    print(100, 200, 300);
    print("Osama", "Elzero");
    return 0;
}

/*
Function
- Function Recursion
--- If You Want To Learn Recursion
--- You Need To Learn Recursion
*/

#include <iostream>
using namespace std;

int add(int num)
{
    if (num == 0)
    {
        return 0;
    }
    cout << num << "\n";
    cout << "===============\n";
    return num + add(num - 1);
}

// 5 + (add(4))
// 5 + ( 4 + add(3) )
// 5 + ( 4 + ( 3 + add(2) ) )
// 5 + ( 4 + ( 3 + ( 2 + add(1) ) ) )
// 5 + ( 4 + ( 3 + ( 2 + ( 1 + add(0) ) ) ) )

int main()
{
    cout << add(5);
    return 0;
}