/*
Vector
- What Is Vector ?
--- Vector Is A Container For Similar Data Like Array
--- Vectors Are Dynamic Arrays => Array That Can Change In Size
--- Vector Is A Class Template
- Vector Syntax => vector<Type> VariableName
- Vector Create With All Methods
- Loop On Elements
- Important Notes


We Will Cover The Comparison With Array Later
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numsOne = {10, 20, 30, 40};
    vector<int> numsTwo{100, 200, 300, 400};
    vector<int> numsThree(4, 50);

    for (int i = 0; i < numsOne.size(); i++)
    {
        cout << numsOne.at(i) << " ";
    }

    cout << "\n===========\n";

    for (int i = 0; i < numsTwo.size(); i++)
    {
        cout << numsTwo.at(i) << " ";
    }

    cout << "\n===========\n";

    for (int i = 0; i < numsThree.size(); i++)
    {
        cout << numsThree.at(i) << " ";
    }

    cout << "\n===========\n";

    cout << "Number Of Elements Is: " << numsThree.size() << "\n";

    numsThree.push_back(1000);

    cout << "Number Of Elements Is: " << numsThree.size() << "\n";

    cout << "\n===========\n";

    numsThree.at(0) = 1000;

    for (int i = 0; i < numsThree.size(); i++)
    {
        cout << numsThree.at(i) << " ";
    }

    cout << "\n===========\n";

    return 0;
}


/*
Vector
--- Vector vs Array

- Vector
--- It Need A Standard Header To Work
--- Can Be Resized After Insertion Or Deletion Of Elements
--- Not Index Based And Elements Accessed By Iterators
--- Vectors Are Slower Than Arrays
--- Vectors Occupy More Memory
--- Available In C++ Only

- Array
--- C-Array Is Language Construct
--- Cannot Be Resized After Its Defined
--- Elements Accessed By Indexes
--- Arrays Are Faster Than Vectors
--- Arrays Occupy Less Memory
--- Available In C & C++

When To Use Vector
--- When We Don't Know The Size Of The List

When We Use Array
--- When It Comes To Performance & Speed

[1] After Learning Pointers There Will Be More Things To Compare
[2] You Can Still Create Dynamic Array But Vector Is Better
*/

#include <iostream>
#include <vector>
#include <array>

using namespace std;

void calc(vector<int> numsVector)
{
    int result = 0;
    for (int i = 0; i < numsVector.size(); i++)
    {
        result += numsVector[i];
    }
    cout << "Result Is: " << result << "\n";
}

int main()
{
    int nums[4] = {10, 20, 30};
    cout << nums[2] << "\n";
    nums[3] = 100;
    cout << nums[3] << "\n";

    cout << "=========\n";

    array<int, 4> numsArray = {10, 20, 30};
    cout << numsArray[2] << "\n";
    numsArray[3] = 100;
    cout << numsArray[3] << "\n";

    cout << "=========\n";

    vector<int> arrayOfNumbers = {10, 20, 30, 40, 100, 300};

    calc(arrayOfNumbers);

    return 0;
}

/*
Vector

- Access
--- at()
--- Square Brackets [] < Do Not Use

- Add
--- push_back => Add Element To The End

- Update
--- at()

- Delete
--- pop_back() => Remove Element From The End
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30};
    cout << nums.at(2) << "\n";
    cout << nums[2] << "\n";
    nums.push_back(40);
    cout << nums.size() << "\n"; // 4
    cout << nums.at(3) << "\n";  // 40
    nums.at(3) = 100;
    cout << nums.at(3) << "\n"; // 100
    nums.push_back(500);
    cout << nums.size() << "\n"; // 5
    cout << nums.at(4) << "\n";  // 500
    nums.pop_back();
    cout << nums.size() << "\n"; // 4

    return 0;
}


/*
Vector
- size()     => Current Number Of Elements
- max_size() => Maximum Number Of Elements
- capacity() => Storage Capacity
- front()    => First Element
- back()     => Last Element
- clear()    => Clear All Elements From Vector
- empty()    => Check If Its Empty Or No
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    cout << nums.size() << "\n"; //4
    cout << nums.max_size() << "\n";
    nums.push_back(50);
    nums.push_back(60);
    nums.push_back(70);
    nums.push_back(80);
    cout << nums.capacity() << "\n";
    cout << nums.front() << "\n";//10
    cout << nums.at(0) << "\n";//10
    cout << nums.back() << "\n";//80
    cout << nums.at(nums.size() - 1) << "\n";//80
    nums.clear();
    cout << nums.size() << "\n";//0
    nums.push_back(100);
    if (nums.empty())
    {
        cout << "Vector Is Empty\n";
    }
    else
    {
        cout << "Vector Is Not Empty\n";
    }
    return 0;
}


/*
Vector
- Iterator

--- Containers
------ Array
------ Vector
------ List

--- What Is Iterators
------ Iterators Used To Point To Memory Address Of The Container

--- Why We Use Iterators
[1] Simplify The Code => No Need To See The Full Iteration On Containers
[2] Support For Many Algorithms Like Sorting And Finding
[3] Allow The Dealing With One Element Without The Need To Load The Full List
[4] Work The Same Way With All Containers
[5] It Reduce The Complexity And Execution Time Of The Application

--- Syntax
------ Container<Type>::iterator IteratorName;

--- Initialize
------ With Vector Syntax
------ With Auto Keyword

--- Print
------ [*] Dereference => Dont Print The Iterator, Print What Its Point To

--- Notes
------ This Is Not Pointer, We Will Talk About Pointer Later

Search For
- Iterators Type
- C++ Containers
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator it = nums.begin();
    auto ite = nums.begin() + 1;

    cout << "First Element Is: " << *it << "\n";
    cout << "Second Element Is: " << *ite << "\n";
    cout << "First Element Is: " << *nums.begin() << "\n";

    nums.erase(nums.begin(), nums.begin() + 2);

    cout << "First Element After Delete Is: " << *nums.begin() << "\n";

    return 0;
}


/*
Vector
- Iterator
--- Traversing
------ begin()
------ end()
------ advance()
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator first = nums.begin();
    vector<int>::iterator last = nums.end() - 1;

    cout << "First Element Is: " << *first << "\n";    // 10
    cout << "Second Element Is: " << first[1] << "\n"; // 20
    cout << "Third Element Is: " << first[2] << "\n";  // 30

    cout << "Last Element Is: " << *last << "\n";              // 40
    cout << "Before Last Element Is: " << *(last - 1) << "\n"; // 30

    advance(first, 3);

    cout << "First Element Is: " << *first << "\n"; // 40

    advance(first, -2);

    cout << "First Element Is: " << *first << "\n"; // 20

    return 0;
}


/*
Vector
- Iterator
--- Loop With Iterator
--- Ranged Loop With For
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator it;

    // Loop With Iterator
    for (it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << "\n";
    }

    cout << "================\n";

    // Ranged Loop With For
    for (int val : nums)
    {
        cout << val << "\n";
    }

    cout << "================\n";

    int numbers[5] = {20, 40, 60, 80, 100};

    for (int myNumber : numbers)
    {
        cout << myNumber << "\n";
    }

    return 0;
}


/*
Vector
- Use Iterator To:
--- Sort
--- Count
--- Reverse
- search for
--- rotate
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {10, 500, 60, -20, 20, 20, 100, 20};

    int val = 20;
    int countTimes = count(nums.begin(), nums.end(), val);
    cout << "Number " << val << " Found " << countTimes << " Times.\n";

    cout << "=====================\n";

    for (int &#038; n : nums)
    {
        cout << n << "\n";
    }

    cout << "=====================\n";

    sort(nums.begin(), nums.end());

    for (int &#038; n : nums)
    {
        cout << n << "\n";
    }

    cout << "=====================\n";

    reverse(nums.begin(), nums.end());

    for (int &#038; n : nums)
    {
        cout << n << "\n";
    }

    cout << "=====================\n";

    return 0;
}

/*
- Usefull Method
--- Insert
*/
#include<iostream>    
#include<vector> 
using namespace std;
int main()
{  
	vector<int> vec {2,4,6,8};
	vector<int> vec2 {1,3,5,7};
	
	// Inserting vec2 at the end of the vec
	vec.insert(vec.end(),vec2.begin(),vec2.end());
	
	cout<<"\n";

	for(auto i=vec.begin(); i<vec.end(); i++)
	{
		cout<<" "<<*i;
	}
	return 0;
}

/*
- Usefull Method
--- erase()
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};
	vector <int> ::iterator it = numbers.begin();
    numbers.erase(it + 1 , it + 4); // Erasing 20,30,40

	for (int n : numbers)
	{
		cout << n << " ";
	}
    return 0;
}

/*
- Usefull Method
--- fill()
--- resize()
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<float> floats(10);

    fill(floats.begin() , floats.end() , 50);

    for (int n : floats)
    {
        cout << n << " ";
    }
    cout << "\n===============\n";
    
    floats.resize(3);

    for (int n : floats)
    {
        cout << n << " ";
    }
    return 0;
}


/*
- Usefull Method
--- rotate()
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    rotate(nums.begin() , nums.begin() + 4 , nums.end() - 1);
    for (int i : nums)
    {
        cout << i << "\n";
    }
    return 0;
}


/*
- Usefull Method
--- merge()
---- syntax : merge( f.begin() , f.end() , s.begin() , s.end() , result.begin() )
----- f : first container
----- s : second container
----- result : merged container
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> n1 = {1, 2, 3};
    vector<int> n2 = {4, 5, 6};
    vector <int> allvectors (n1.size() + n2.size()); // result vector

    merge(n1.begin(), n1.end(), n2.begin(), n2.end(), allvectors.begin());

    for (int i : allvectors)
    {
        cout << i << "\n";
    }
    return 0;
}


/*
- Usefull Method
--- insert
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> n1 = {1, 2, 3};
    vector<int> n2 = {4, 5, 6};
    vector<int> n3 = {7, 8, 9};
    n1.insert(n1.end() , n2.begin() , n2.end()); 

    for (int i : n1)
    {
        cout << i << "\n";
    }

    n1.insert(n1.end() - 2 , n3.begin() , n3.end());

    for (int i : n1)
    {
        cout << i << "\n";
    }

    return 0;
}

/*
- Usefull Method
--- swap()
*/