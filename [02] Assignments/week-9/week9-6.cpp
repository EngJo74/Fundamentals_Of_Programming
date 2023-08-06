#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 10, 40, 50, 60, 10, 80};
    int check = 10;
    int countone = 0;
    int counttwo = 0;
    int countthree = 0;

    // Write Method One
    countone = count(numbers.begin() , numbers.end() , check);
    // Write Method Two
    for(int i=0 ; i < numbers.size() ; i++)
    {
        if ( numbers.at(i) == check )
        {
            counttwo++;
        }
    }
    // write Method three
    for (int n : numbers)
    {
        if ( n == check )
        {
            countthree++;
        }
    }
    cout << countone << "\n"; // 3
    cout << counttwo << "\n"; // 3
    cout << countthree << "\n"; // 3
    return 0;
}