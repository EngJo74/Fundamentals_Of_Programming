/*
Loop
- Loop With For
- Loop On Array

Syntax
for(init, Condition, Update)
{
    // Block Of Code
}
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << num << "\n"; // 0
    num++;
    cout << num << "\n"; // 1
    num++;
    cout << num << "\n"; // 2
    num++;
    cout << num << "\n"; // 3
    num++;
    cout << num << "\n"; // 4
    num++;
    cout << num << "\n"; // 5

    for (int i = 0; i < 6; i++)
    {
        cout << i << "\n";
    }

    int nums[4] = {100, 200, 300, 400};
    cout << nums[0] << "\n";
    cout << nums[1] << "\n";
    cout << nums[2] << "\n";
    cout << nums[3] << "\n";

    for (int index = 0; index < 4; index++)
    {
        cout << nums[index] << "\n";
    }

    return 0;
}

/*
Loop
- Loop For Advanced Syntax
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600};
    int numsCount = sizeof(nums) / sizeof(nums[0]); // 6
    int i = 0;

    for (;;)
    {
        cout << nums[i] << "\n";
        i++;
        if (i == numsCount)
        {
            break;
        }
    }

    return 0;
}

/*
Loop
- Loop For Advanced Trainings
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600, 700};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    // Method 1
    for (int i = 0; i < numsSize; i += 2)
    {
        cout << nums[i] << "\n";
    }
    // Method 2
    for (int i = 0; i < numsSize; i++)
    {
        cout << nums[i] << "\n";
        i++;
    }
    // 100, 300, 500
    for (int i = numsSize - 2; i > 1; i--)
    {
        cout << nums[i] << "\n";
    }
    // 600, 500, 400, 300
    return 0;
}

/*
Loop
- Nested Loop For
*/

#include <iostream>
using namespace std;

int main()
{
    string products[] = {"Item 1", "Item 2", "Item 3"};
    string sizes[] = {"Small", "Large", "X-Large"};

    for (int i = 0; i < 3; i++)
    {
        cout << "Product Name:\n";
        cout << products[i] << "\n";
        cout << "Sizes:\n";
        for (int j = 0; j < 3; j++)
        {
            cout << sizes[j];
            if (j < 2)
            {
                cout << ", ";
            }
        }
        cout << "\n";
        cout << "=====================\n";
    }

    return 0;
}

/*
Loop
- Loop With While

Syntax
while (Condition Is True)
{

}
*/

#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 5; i++)
    // {
    //   cout << i << "\n";
    // }

    int i = 0;

    while (i < 5)
    {
        cout << i << "\n";
        i++;
        if (i == 2)
        {
            break;
        }
    }

    return 0;
}

/*
Loop
- Loop With Do...While

Syntax
do
{

} while (Condition Is True);
*/

#include <iostream>
using namespace std;

int main()
{
    int index = 6;

    // while (index < 6)
    // {
    //   cout << index << "\n";
    //   index++;
    // }

    do
    {
        cout << index << "\n";
        index++;
    } while (index < 6);

    return 0;
}

/*
Loop
- Break
- Continue
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 20, 30, 40, 20, 50};

    for (int i = 0; i < 6; i++)
    {
        cout << nums[i] << "\n";

        if (nums[i] == 10)
        {
            break;
        }

        // if (nums[i] == 20)
        // {
        //   continue;
        // }

        // cout << "After\n";
    }

    return 0;
}


/*
  Loop
  - Compare
  --- For => Specific Number Of Loops
  --- While => Loop As Long Condition Is True
  --- Do While => Always Execute Once

  Create Three Apps
  -- Count Positive & Even Numbers Only
  -- Guess The Number
  -- Reversed Elements From User
*/

#include <iostream>
using namespace std;

int main()
{
    // Count Positive & Even Numbers Only
    int result = 0;
    int nums[] = {10, 20, -20, 13, 30, -30, 40};
    int numsSize = size(nums); // 7

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > 0 && nums[i] % 2 == 0)
        {
            result += nums[i];
        }
    }

    cout << "Result Is: " << result << "\n";

    // Guess The Number
    int guessNumber = 7;
    int guessTries = 0;
    int choose;
    cout << "Please Guess The Number Between 1 &#038; 10\n";

    while (true)
    {
        cin >> choose;
        if (choose == guessNumber)
        {
            cout << "Great, Correct Guess\n";
            break;
        }
        else
        {
            cout << "Sorry, Wrong Guess\n";
            guessTries++;
        }
        if (guessTries == 3)
        {
            cout << "Sorry, You Failed. The Number Is: " << guessNumber << "\n";
            break;
        }
    }

    // Reversed Elements From User
    int vals[5];
    int inp;
    cout << "Type 5 Numbers To Reverse\n";

    // [0, 1, 2, 3, 4]

    for (int i = 4; i > -1; i--)
    {
        cin >> inp;
        vals[i] = inp;
    }

    cout << "======================\n";

    for (int i = 0; i < 5; i++)
    {
        cout << vals[i] << "\n";
    }

    return 0;
}
