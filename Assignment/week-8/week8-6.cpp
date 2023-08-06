#include <iostream>
using namespace std;

// Write Your Function Here
string swapping (string word)
{
    string result ="";
    for (int i=0; i < size(word); i++)
    {
        if(word[i] == 'h')
        {
            result += word[i];
        }
        else if (isupper(word[i]))
        {
            result += (tolower(word[i]));
        }
        else
        {
            result += (toupper(word[i]));
        }
    }
    return result;
}
int main()
{
    cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
    return 0;
}