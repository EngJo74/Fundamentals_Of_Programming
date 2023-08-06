#include <iostream>
using namespace std;

// Write Your Functions Here
float avg (int nums[], int size)
{
    float sum = 0.0;
    for (int i=0; i < size ; i++)
    {
        sum += nums[i];
    }
    return sum / size;
}
int main()
{
    int money[] = {10, 20, 15, 25, 30, 35};
    int monsize = size(money);
    cout << avg(money, monsize) << "\n"; // 22.5
    return 0;
}