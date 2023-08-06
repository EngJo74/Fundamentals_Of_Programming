#include <iostream>
using namespace std;
int main()
{
    string friends[] = {"Ahmed", "Osama", "Ameer"};
    int size = sizeof(friends)/sizeof(friends[0]);

    for (int i = 0 ; i < size ; i++)
    {
        int size_inside = friends[i].length(); // number of letters in the name
        
        cout << "=========\n= ";
        cout << friends[i] << " =\n";
        cout << "==================\n== ";
        
        for (int j = 0; j < size_inside ; j++)
        {
            cout << friends[i][j];
            if ( j != size_inside-1) // if 'j' in last index dont print ", "
            {
                cout << ", ";
            }
        }
            cout <<" =\n==================\n\n";
    }
}