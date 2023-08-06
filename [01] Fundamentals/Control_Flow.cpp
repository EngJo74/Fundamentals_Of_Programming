/*
  Control Flow
  - If Condition Introduction

  Syntax
  if (Condition Is True)
  {
    // Do Something
  }
*/

#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    cout << "Welcome\n";

    if (age < 18) // False
    {
        cout << "Beware\n";
    }

    cout << "See You\n";
    return 0;
}

/*
  Control Flow
  - If ... else if ... else

  Syntax
  if (Condition Is True)
  {
    // Do Something
  }
*/

#include <iostream>
using namespace std;

int main()
{
    int age = 15;
    int points = 450;
    int rank = 4;

    if (age >= 18)
    {
        cout << "Welcome Your Age Is Ok\n";
    }
    else if (points > 500)
    {
        cout << "Welcome Your Points Is Ok\n";
    }
    else if (rank > 5)
    {
        cout << "Welcome Your Rank Is Ok\n";
    }
    else
    {
        cout << "Iam Sorry\n";
    }

    return 0;
}

/*
  Control Flow
  - Nested If Conditions
*/

#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    int points = 1500;

    if (age >= 18)
    {
        cout << "Welcome Your Age Is OK\n";
        if (points >= 1000)
        {
            cout << "You Are VIP\n";
        }
    }

    return 0;
}

/*
  Control Flow
  - Ternary Operator

  Syntax
  (Condition) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
    int age = 15;

    if (age >= 18)
    {
        cout << "Your Age Is OK\n";
    }
    else
    {
        cout << "Your Age Is Not OK\n";
    }

    cout << (age >= 18 ? "Age Is OK\n" : "Age Is Not OK\n");

    string msg = age >= 18 ? "Age Is OK\n" : "Age Is Not OK\n";

    cout << msg;

    return 0;
}

/*
  Control Flow
  - Nested Ternary Operator
  - Alternate Syntax For If Condition

  Syntax
  (Condition Is True) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
    int age = 15;
    int points = 450;

    if (age >= 18)
    {
        cout << "OK\n";
    }
    else
    {
        if (points >= 500)
        {
            cout << "OK Because Of Points\n";
        }
        else
        {
            cout << "No Age Or Points\n";
        }
    }

    cout << (age >= 18 ? "OK\n" : (points >= 500 ? "OK P\n" : "No P\n"));

    cout << (points >= 500 ? "OK P\n" : "No P\n");

    if (age >= 18)
        cout << "OK\n";
    else
        cout << "Not OK\n";

    return 0;
}

/*
  Control Flow
  - If Condition Trainings

  4 Training Apps
  - Even / Odd Checker
  - Find Greatest Number
  - User Rank Checker
  - Simple Calculator
*/

#include <iostream>
using namespace std;

int main()
{
    // App 1 => Even / Odd Checker

    int num;
    cin >> num;

    if (num % 2 == 0)
        cout << "The Number " << num << " Is Even\n";
    else
        cout << "The Number " << num << " Is Odd\n";

    // App 2 => Find Greatest Number

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " Is The Greatest Number\n";
    }
    else if (b > a && b > c)
    {
        cout << b << " Is The Greatest Number\n";
    }
    else
    {
        cout << c << " Is The Greatest Number\n";
    }

    // App 3 => User Rank Checker

    int points;
    cin >> points;

    if (points > 0 && points <= 500)
    {
        cout << "Not Bad\n";
    }
    else if (points > 500 && points <= 1000)
    {
        cout << "Very Good\n";
    }
    else
    {
        cout << "VIP\n";
    }

    // App 4 => Simple Calculator

    int num_one, num_two, op;

    cout << "Type Number One\n";
    cin >> num_one;
    cout << "Type Number Two\n";
    cin >> num_two;
    cout << "Choose Operation Number\n";
    cout << "[1] +\n";
    cout << "[2] -\n";
    cout << "[3] /\n";
    cout << "[4] *\n";
    cin >> op;

    if (op == 1)
    {
        cout << num_one + num_two << "\n";
    }
    else if (op == 2)
    {
        cout << num_one - num_two << "\n";
    }
    else if (op == 3)
    {
        cout << num_one / num_two << "\n";
    }
    else if (op == 4)
    {
        cout << num_one * num_two << "\n";
    }
    else
    {
        cout << "Operation Is Not Valid\n";
    }

    return 0;
}

/*
  Control Flow
  - Switch
*/

#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Choose A Day From 1 To 25\n";
    cin >> day;

    if (day == 1)
    {
        cout << "Open From 08:00 To 14:00";
    }
    else if (day == 2)
    {
        cout << "Open From 08:00 To 14:00";
    }
    else if (day == 3)
    {
        cout << "Open From 10:00 To 16:00";
    }
    else
    {
        cout << "Closed";
    }

    switch (day)
    {
    case 1:
    case 2:
        cout << "Open From 08:00 To 14:00";
        break;
    case 3:
        cout << "Open From 10:00 To 16:00";
        break;
    default:
        cout << "Closed";
    }

    return 0;
}

/*
  Control Flow
  - Switch Trainings
  --- Award System Application
  --- Discount Application
  --- Simple Calculator Application
*/

#include <iostream>
using namespace std;

int main()
{
    // App 1 => Award System Application

    int num;
    cout << "Type The Number\n";
    cin >> num;

    switch (num)
    {
    case 100:
    case 110:
    case 120:
        cout << "Congratz For The iPhone";
        break;
    case 200:
        cout << "Congratz For The iPad";
        break;
    case 300:
        cout << "Congratz For The TV";
        break;
    case 400:
        cout << "Congratz For The KeyChain";
        break;
    default:
        cout << "No Award For This Number";
    }

    // App 2 => Discount Application

    int price = 100;
    int discount = 10;
    int years;
    cout << "Type The Number Of Years in Company\n";
    cin >> years;

    switch (years)
    {
    case 1:
        discount = 20;
        break;
    case 2:
        discount = 40;
        break;
    case 3:
        discount = 80;
        break;
    }

    cout << "The Price Is " << price - discount << "\n";

    // App 3 => Simple Calculator

    int n1, n2, op;
    cout << "Type Number One\n";
    cin >> n1;
    cout << "Type Number Two\n";
    cin >> n2;
    cout << "Choose Operation Number\n";
    cout << "[1] +\n";
    cout << "[2] -\n";
    cout << "[3] /\n";
    cout << "[4] *\n";
    cin >> op;

    if (op == 1)
    {
        cout << num_one + num_two << "\n";
    }
    else if (op == 2)
    {
        cout << num_one - num_two << "\n";
    }
    else if (op == 3)
    {
        cout << num_one / num_two << "\n";
    }
    else if (op == 4)
    {
        cout << num_one * num_two << "\n";
    }
    else
    {
        cout << "Operation Is Not Valid\n";
    }

    switch (op)
    {
    case 1:
        cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
        break;
    case 2:
        cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n";
        break;
    case 3:
        cout << n1 << " / " << n2 << " = " << n1 / n2 << "\n";
        break;
    case 4:
        cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n";
        break;
    default:
        cout << "Operation Is Not Valid\n";
    }

    return 0;
}
