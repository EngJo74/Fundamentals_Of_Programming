#include <iostream>
using namespace std;

// Write Your Function Here
int calculate (int x , int y ,string type = "add")
{
    if (type == "add" || type == "a")
    {
        return x + y;
    }
    if (type == "subtract" || type == "s")
    {
        return x - y;
    }
    if (type == "multiply" || type == "m")
    {
        return x * y;
    }
    else
    {
        return 0;
    }
}
int main()
{
    cout << calculate(10, 20) << "\n";             // 30
    cout << calculate(10, 20, "a") << "\n";        // 30
    cout << calculate(10, 20, "s") << "\n";        // -10
    cout << calculate(10, 20, "subtract") << "\n"; // -10
    cout << calculate(10, 20, "multiply") << "\n"; // 200
    cout << calculate(10, 20, "m") << "\n";        // 200
    cout << calculate(10, 20, "Invalid") << "\n";  // 0
    return 0;
}