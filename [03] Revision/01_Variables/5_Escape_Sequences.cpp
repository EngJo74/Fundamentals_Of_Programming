/*
- Variables
-- Escape Sequences Characters
---- Special Non Printing Characters
---- Control Printing Behaviour
---- Start With Back Slash "\"
---- Can Be Inserted In Any Position
- \n => new line
- \\ => insert \
- \" => insert "
- \' => insert '
- \t => Tab Equal 2/4/6/8 Spaces 
- \b => backspace
- \a => Alert (Beep)
- \r => Carriage Return
*/
// Important :'/r' , '/b'--> Overwrite texts
#include <iostream>
using namespace std;
int main()
{
	cout << "Youssef\tAhmad";
	cout << "\n";
	cout << "Jo\nNasr";
	cout << "\n";
	cout << "My Birth day : 05\\03\\05"; // Print : 05/03/05
	cout << "\n";
	cout << "will not appear\rYoussef Ahmad Nasr";
	cout << "\n";
	cout << "12345\r56";
	cout << "\n";
	cout << "My Name : \"Jo Nasr\"";
	cout << "\n";
	cout << "ABCDEF\b";
	cout << "\n";
	cout << "ABCDEF\ba";
	cout << "\n";
	cout << "ABCDEF\b\bab";
	cout << "\n";
	cout << "ABCDEF\b\b\babc";
	cout << "\n";
	cout << "ABCDEF\b\b\b\b\b\ba";
	cout << "\n";
	cout << "ABCDEF\b\b\b\b\b\b1234";
}