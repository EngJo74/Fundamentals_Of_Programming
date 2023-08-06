#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> nums{ 100, 200, 300, 400 };
	for (int n : nums)
	{
		cout << n << "\n";
	}

	nums.push_back(500);

	cout << "First Element Is: " << nums.at(0) << "\n";
	cout << "Last Element Is: " << nums.at((nums.size() - 1));

	return 0;

}