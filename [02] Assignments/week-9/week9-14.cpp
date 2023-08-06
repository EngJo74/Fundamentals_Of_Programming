#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Dont forgot to solve it again
    vector<int> nums = {5, 4, 3, 2, 1};

    // Method One
    reverse(nums.begin() , nums.end());
    // Method Two
    sort (nums.begin() , nums.end());
    // Method Three -> Use Swap + Loop For Challenge
    int sizeVec = nums.size();
    for (int i=0; i < sizeVec; i++)
    {
        if (i >= int(sizeVec / 2))
        {
            swap ( nums.at(i) , nums.at (sizeVec-(i+1)) );
        }
    }
    
    for (int i : nums)
    {
        cout << i << "\n";
    }

    return 0;
}

// Needed Output
// 1 2 3 4 5