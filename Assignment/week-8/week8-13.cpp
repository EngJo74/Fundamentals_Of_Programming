#include <iostream>
using namespace std;

// Write Your Function Here
string greeting (string name , string type ="")
{
    // Method 1
    if (type == "Male")
    {
        return "Hello Mr " + name;
    }
    else if (type == "Female")
    {
        return "Hello Miss " + name;
    }
    else
    {
        return "Hello " + name;
    }

    // Method 2
    // string nickname;
    // if (type == "Male")
    // {
    //     nickname = "Mr ";
    // }
    // else if (type == "Female")
    // {
    //     nickname = "Miss ";
    // }
    // else
    // {
    //     nickname ="";
    // }
    
    // return "Hello " + nickname + name;


}
int main()
{
    cout << greeting("Osama", "Male") << "\n";  // Hello Mr Osama
    cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
    cout << greeting("Sameh") << "\n";          // Hello Sameh
    return 0;
}