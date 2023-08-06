#include <iostream>
using namespace std;

// Write Your Function Here
string createurl (string one , string two , string three , bool four = true)
{
    return one + "://" + (four ? "www." : "") + two + "." + three ;
}
int main()
{
    cout << createurl("https", "elzero", "org") << "\n";        
    cout << createurl("https", "google", "com", false) << "\n"; 
    cout << createurl("http", "learn", "net") << "\n";          
    return 0;
}