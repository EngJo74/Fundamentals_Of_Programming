/*
- Variables
--- Another declarition types
--- Global , local scopes
*/
#include <iostream>
using namespace std;

int glob = 1000;
void second ();
int main ()
{
    int x = 50;
    int y (60);
    int z {40};
    cout << x << " " << y << " " << z << "\n";

    cout << "======================\n";

    cout << glob << " From Main\n";
    // cout << loc << " From Main\n"; // Cannot
    second();

}
void second ()
{
    int loc = 500;
    cout << glob << " From Second\n";
    cout << loc << " From Second\n";
    // cout << x << " From Second\n"; // Cannot
}