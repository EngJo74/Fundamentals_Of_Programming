#include <iostream>
using namespace std;
string clean (string word)
{
    string SkippedI;
    if (size(word) == 1) 
    {
        return word;
    }


    for (int i=1; i < size(word); i++)
    {
        SkippedI += word[i];
    }


    if (word[0] == word[1])
    {
        return clean(SkippedI);
    }
    else
    {
        return word[0] + clean(SkippedI);
    }
}
int main()
{
    cout << clean ("wwwoorlled"); //worled
}