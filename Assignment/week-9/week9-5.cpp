#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};
    vector<int>::iterator it = numbers.begin();

    // Write Method One
    it += (numbers.size() / (-1 * (-1-1)));
    // Write Method Two
    advance(it , (-1 * (-1 -1 -1 -1)) );
    // Write Method Three
    numbers.erase(it , numbers.end() + (-1 -1 -1 -1));
    cout << *it << "\n"; // 50
    return 0;
}