/*
- is a data container with unique name
-  can be declare with value and change later
syntax : [Data_type][Variable_name] = [Value]
*/
int price = 200; // declare new variable
cout << price;   // 200
price = 150;     // update variable value
cout << price;   // 150

int price = 100; // declare
price = 200;     // update
int price = 400;
cout << price; // display 200

/*
-Naming rules and best practices
-- must be unique -- case sensitive -- cannot start with num -- no white spaces or special charachters
-- cannot use reserved words -- nums or letters or under score

Q:Can we use "_num_ber_" as a variable name ? true

-Declare variable without value + change later
*/
int a;
a = 100;
cout << a;   // 100
cout << "a"; // error -> it is not a string

int b, c, d;
b = 10, c = 20, d = 30;
cout << b + c + d; // 60

int e, f = 40, g;
e = 20, g = 60;
cout << e + f + g; // 100

//- variables scope-- Global variable-- local variable

    int a = 100; // Global Variable

int second()
{
    int b = 200; // Local Variable
    cout << a << " Coming From Second Function\n";
    cout << b << " Coming From Second Function\n";
    return 0;
}

int main()
{
    cout << a << " Coming From Main Function\n";
    // cout << b << " Coming From Main Function\n"; // Undefined
    second();
    return 0;
}
/*
-Constant Variables
-- Read only value -- Cannot declare without value
*/
#define DAYS 9
int main()
{
    const int day = 8;
    // int salary = 15000;
    const int num = 100;
    // num = 200;
    cout << num;
    // const int x; // secound type
    cout << "\n"<< DAYS;
    return 0;
}

- Escape sequences characters

/*
Escape Sequences Characters
--- Special Non Printing Characters
--- Control Printing Behaviour
--- Start With Back Slash "\"
--- Can Be Inserted In Any Position
- \n => new line
- \\ => back slash
- \" => insert "
- \' => //     '
- \t => Tab Equal 8 Spaces
- \b => backspace
- \a => Alert => Play Beep During Execution
- \r => Carriage Return
*/
#include <iostream>
    using namespace std;
int main()
{
    cout << "Line 1\n";
    cout << "Line 2\n";
    cout << "Line 3\\\n";
    cout << "Line \"4\"\n";
    cout << "Line 5\n";
    cout << "Line\t6\n";
    cout << "Line\b7\n"; // Lin7
    cout << "Line 8\a\n";
    cout << "Osama\rLzero\n"; // Lzero
    cout << "Line";           // This Is Line \\
  return 0;
}
