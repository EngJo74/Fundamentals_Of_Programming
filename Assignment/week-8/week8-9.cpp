#include <iostream>
using namespace std;

// Write Your Function Here
int sumall (int nums[] , int size , int skip)
{
    // Method 1
    // int result = 0;
    // for (int i=0; i < size; i++)
    // {
    //     if (nums[i] != skip)
    //     {
    //         result += nums[i];
    //     }
    // }
    // return result;

    // Method 2
    int result = 0;
    for (int i=0; i < size; i++)
    {
        if (nums[i] == skip)
        {
            continue;
        }
        result += nums[i];
    }
    return result;

}
int main()
{
    int numbers[] = {13, 20, 3, 30, 5, 7, 40, 13}; // 20 + 3 + 30 + 5 + 7 + 40 = 105
    int numssize = size(numbers);
    int noneed = 13;
    cout << sumall(numbers, numssize, noneed) << "\n";
    return 0;
}