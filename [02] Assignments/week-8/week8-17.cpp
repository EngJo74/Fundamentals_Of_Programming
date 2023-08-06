#include <iostream>
using namespace std;

// Write Your Function Here
int pricing (int nums , int used , int newPrice , int taxes)
{
    int newphones = nums - used ; // number of new phones 
    int Total = (newphones * newPrice) + (used *(newPrice-200)); // price of all buyed phones
    Total -= (Total * taxes / 100); // Price after sustracting taxes
    // newphones = 50 - 10 = 40
    // Total = 40*800 + 10*600 = 38000
    // 38000 - (38000 * (20/100) ) = 30400
    return Total;
}
int main()
{
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}