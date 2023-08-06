#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply (int nums[], int size)
{
    int even = 0, odd = 1;
    for (int i=0; i < size; i++)
    {
        if (nums[i] % 2 == 0)
        {
            even += nums[i];
        }
        else 
        {
            odd *= nums[i];
        }
    }
    return (odd + even);
}
int main()
{
    int numbers[] = {10, 20, 3, 30, 5, 7, 40};
    int numssize = size(numbers);
    cout << plusandmultiply(numbers, numssize) << "\n";
    // Even Numbers -> 10 + 20 + 30 + 40 = 100
    // Odd Numbers  -> 3 * 5 * 7 = 105
    // Total = 100 + 105 = 205
    return 0;
}