/*
  Arrays
  - What Is Array ?
  --- Collection Of Elements Of The Same Type
  --- Placed in Contiguous Memory Locations
  --- Referenced By Index Started From 0
  - Why We Need Array ?
  - Creating Array Syntax
  - Check Array Size
  - Create Array Without Size
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[4] = {100, 200, 300, 400};
    cout << sizeof(int) << "\n";  // 4 Bytes
    cout << sizeof(nums) << "\n"; // 16 Bytes

    double dos[4] = {100, 200, 300, 400};
    cout << sizeof(double) << "\n"; // 8 Bytes
    cout << sizeof(dos) << "\n";    // 32 Bytes

    int rands[]{100, 5000, 950};
    return 0;
}

/*
  Arrays
  - Access Array Elements
  - Check Element Location
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[]{100, 200, 300};

    cout << "First Element: " << nums[0] << "\n";
    cout << "Last Element: " << nums[2] << "\n"; // Number Of Elements - 1

    cout << "Location: " << &nums[0] << "\n";
    cout << "Location: " << &nums[1] << "\n";
    cout << "Location: " << &nums[2] << "\n";
    return 0;
}

/*
  Arrays
  - Declare Empty Array
  - Add Elements To Array
  - Update Array Elements
  - Get Length Of Array With Sizeof
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[4];

    nums[3] = 400; // Last Element
    nums[0] = 100; // First Element
    nums[1] = 200; // Second Element
    nums[2] = 300; // Third Element

    cout << "Element 1: " << nums[0] << "\n";
    cout << "Element 2: " << nums[1] << "\n";
    cout << "Element 3: " << nums[2] << "\n";
    cout << "Element 4: " << nums[3] << "\n";

    nums[1] = 1000; // Second Element

    cout << "Element 2: " << nums[1] << "\n";

    int anums[] = {100, 200, 300, 400, 500, 600}; // 24 / 4 = 6
    cout << "Array Elements Count Is " << sizeof(anums) / sizeof(anums[0]);

    return 0;
}

/*
  Arrays
  - Two Dimensional Arrays AKA [2D Array]

  Search For
  - Matrix Operations
  - 3D Array
*/

#include <iostream>
using namespace std;

int main()
{
    int points_a[3] = {1, 2, 3};
    int points_b[3] = {4, 5, 6};
    int points_c[3] = {7, 8, 9};

    // Good Practice

    const int rows = 3;
    const int columns = 3;
    int points[rows][columns] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << points[1][2] << "\n"; // 6
    cout << points[2][0] << "\n"; // 7
    cout << points[2][2] << "\n"; // 9

    // Bad Practice
    // int points[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // cout << points[1][2] << "\n"; // 6
    // cout << points[2][0] << "\n"; // 7
    // cout << points[2][2] << "\n"; // 9

    return 0;
}

/*
  Arrays
  - Array Class
  - Test Methods

  Syntax
  Template<Type, Size> Identifier;
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
    // int points[4] = {1, 2, 3, 4}; // C-Style Array
    array<int, 4> points = {1, 2, 3, 4};
    cout << points[0] << "\n";
    cout << points[1] << "\n";
    cout << points[2] << "\n";
    cout << points[3] << "\n";
    cout << "Elements Count: " << points.size() << "\n";
    points.fill(10);
    cout << points[0] << "\n";
    cout << points[1] << "\n";
    cout << points[2] << "\n";
    cout << points[3] << "\n";
    points.fill('A');
    cout << points[0] << "\n";
    cout << points[1] << "\n";
    cout << points[2] << "\n";
    cout << points[3] << "\n";
    points.fill(true);
    cout << points[0] << "\n";
    cout << points[1] << "\n";
    cout << points[2] << "\n";
    cout << points[3] << "\n";
    points.fill(false);
    cout << points[0] << "\n";
    cout << points[1] << "\n";
    cout << points[2] << "\n";
    cout << points[3] << "\n";
    return 0;
}

/*
  Arrays
  - Useful Methods
  --- at
  --- front
  --- back
  --- fill
  --- size
  --- empty
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 4> nums = {100, 200, 300, 400};
    cout << nums[0] << "\n";      // 100
    cout << nums.front() << "\n"; // 100
    cout << nums[3] << "\n";      // 400
    cout << nums.back() << "\n";  // 400
    cout << nums.at(1) << "\n";   // 200
    cout << nums.size() << "\n";  // 4
    cout << nums.empty() << "\n"; // 0 => False
    return 0;
}



#include<iostream>
#include<array>
#include<string>
using namespace std;
int main()
{
    int arr[] = {10,20,30,60,50,40,48,45,96,58};
    string arr2[] = { "Ahmed", "Mohammed" , "Youssef" , "Maro" };
    array <string,4> arr3 = { "Ahmed", "Mohammed" , "Youssef" , "Maro" };

    cout << sizeof(arr)/sizeof(arr[0]) << "\n"; // 10
    cout << size(arr) << "\n";                  // 10
  //cout << arr.size() << "\n";                 // not Class


    cout << sizeof(arr2)/sizeof(arr2[0]) << "\n"; // 4
    cout << size(arr2) << "\n";                   // 4
  //cout << arr2.size() << "\n";                  // not Class
    cout << arr2[1].length() << "\n";             // 8
    cout << size(arr2[1]) << "\n";                // 8


    cout << sizeof(arr3)/sizeof(arr3[0]) << "\n"; // 4
    cout << size(arr3) << "\n";                   // 4
    cout << arr3.size() << "\n";                  // 4
    cout << arr3[2].length() << "\n";             // 7 
    cout << size(arr3[2]) << "\n";                // 7
}