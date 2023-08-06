#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative (int nums[], int size)
{
    int result = -100;
    for (int i=0; i < size ; i++)
    {
        if (nums[i] < 0)
        {
            if (nums[i] > result)
            {
                result = nums[i];
            }
        }
    }
    return result;
}
int main()
{
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0, -5, -10}; // -5
    int numssize = size(numbers);
    cout << firstnegative(numbers, numssize) << "\n";
    return 0;
}