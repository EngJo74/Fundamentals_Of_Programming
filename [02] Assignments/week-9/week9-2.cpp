#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 30, 40 };
    vector<int> ::iterator it = numbers.begin();
    vector<int> ::iterator it2 = numbers.end()-1;

    // First element
    cout << numbers.at(0) << "\n";
    cout << numbers.front() << "\n";
    cout << numbers[0] << "\n";
    cout << *it << "\n";
    cout << *( it2 - (numbers.size() - 1) ) << "\n";

    // Last element
    cout << numbers.at(numbers.size() - 1) << "\n";
    cout << numbers.back() << "\n";
    cout << numbers[numbers.size() - 1] << "\n";
    cout << *it2 << "\n";
    cout << *( it + (numbers.size() - 1) ) << "\n";
}