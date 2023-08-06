#include <iostream>
#include <array>
using namespace std;

int main()
{
    int check = 25;
    int nums[]{40, 20, 30, 70, 100};
    int sizearr = size(nums);
    if (nums[0] > check)
    {
        cout << "{" << nums[0] << "}";
        cout << " + "<< "{" << nums[sizearr-2] << "}";
        cout << " = " << nums[0] + nums[sizearr-2] << endl;
    }
    if (nums[1] > check)
    {
        cout << "{" << nums[1] << "}"<< " + "<< "{" << nums[sizearr-2] << "}"<< " = " << nums[1] + nums[sizearr-2] << endl;
    }
    if (nums[2] > check)
    {
        cout << "{" << nums[2] << "}"<< " + "<< "{" << nums[sizearr-2] << "}"<< " = " << nums[2] + nums[sizearr-2] << endl;
    }
    return 0;
}