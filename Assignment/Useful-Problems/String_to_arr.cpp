#include <vector>
#include <string>
using namespace std;
vector<string> string_to_array(const string &s)
{
    string temp = "";
    vector<string> result;

    for (auto c : s)
    {

        if (c != ' ')
        {
            temp += c;
        }
        else
        {
            result.push_back(temp);
            temp = "";
        }
    }
    result.push_back(temp);

    return result;
}
