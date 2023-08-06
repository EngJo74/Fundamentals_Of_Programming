#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void sum(vector<int>vec);
int main()
{
    vector<int>test{ 5,10,15,20,25,30,35 };

    cout << "Size of Vector: " << test.size() << "\n";

    cout << "Printing Vector before any edit:\n";
    for (int n : test)
    {
        cout << n << " ";
    }
    cout << "\n\n";

    test.at(0) = 100; //update value of first element
    test.at(2) = 200; //update value of third element
    cout << "First Value Updated to: " << test.at(0) << "\n";
    cout << "Third Value Updated to: " << test.at(2) << "\n\n";


    test.push_back(40); // Add an element (40)
    test.push_back(45); // Add an element (45)

    cout << "Element added: " << test.at(7) << "\n";
    cout << "Another Element added: " << test.at(8) << "\n";
    cout << "NEW Size of Vector: " << test.size() << "\n";

    test.pop_back(); // Removing last element (40)
    cout << "Size After removing (45): " << test.size() << "\n\n";

    cout << "First Element by iterator : " << test.at(0) << "\n";
    cout << "First Element by front : " << test.front() << "\n";
    cout << "First Element by index : " << test[0] << "\n\n";

    cout << "Last Element by iterator : " << test.at(test.size() - 1) << "\n";
    cout << "Last Element by back : " << test.back() << "\n";
    cout << "Last Element by index : " << test[test.size() - 1] << "\n\n";



    cout << "Printing Elements After Editing by iterator:\n";
    for (int n : test)
    {
        cout << n << " ";
    }
    cout << "\n";
    cout << "Printing Elements After Editing by index:\n";
    for (int i = 0; i < test.size(); i++)
    {
        cout << test.at(i) << " ";
    }
    cout << "\n\n";

    sum(test);
    cout << "\n=======================================\n";


    cout << "Checking vector elements: ";
    cout << ((test.empty()) ? "Vector is empty\n" : "Vector is not empty\n");
    cout << "Clearing vector elements.....\n";
    test.clear();
    cout << "Checking vector elements: ";
    cout << ((test.empty()) ? "Vector is empty\n" : "Vector is not empty\n");

    cout << "=======================================\n";
    
    test.push_back(10);
    test.push_back(20);
    test.push_back(30);
    test.push_back(50);
    test.push_back(80);
    test.push_back(120);
    cout << "Vector Filled with " << test.size() << " elements, Now\n";

    vector<int>::iterator it = test.begin();

    cout << "First element : " << *it << "\n";
    cout << "Last element : " << *(it + 5) << "\n\n";

    cout << "Vector elements is: ";
    for (int value : test)
    {
        cout << value << " ";
    }
    cout << "\n";

    return 0;
}
void sum(vector<int>vec)
{
    int result = 0;
    for (int s : vec)
    {
        result += s;
    }
    cout << "Sum of elements = " << result;
}