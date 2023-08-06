#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> firstnumbers = {10, 30, 50, 70};
    vector<int> secondnumbers = {20, 40, 60, 80};
    vector<int> all (firstnumbers.size() + secondnumbers.size());
    
    merge(firstnumbers.begin() , firstnumbers.end() , secondnumbers.begin() , secondnumbers.end() , all.begin());

    for (int n : all )
    {
        cout << n << " ";
    }
    cout << "\n";

    // sort(all.begin() , all.end());

    // for (int n : all )
    // {
    //     cout << n << " ";
    // }
    // cout << "\n";
    return 0;
}

// Output Needed
// 10 20 30 40 50 60 70 80