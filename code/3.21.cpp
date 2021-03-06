#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1;
	if(v1.begin() != v1.end())
	{
		cout << "v1: ";
		for (auto i = v1.begin(); i != v1.end(); ++i)
			cout << *i << " ";
		cout << endl;
	}
	else
	{
		cout << "v1 is empty" << endl;
	}
	
	vector<int> v2(10);
	if(v2.begin() != v2.end())
	{
		cout << "v2: ";
		for (auto i = v2.begin(); i != v2.end(); ++i)
			cout << *i << " ";
		cout << endl;
	}
	else
	{
		cout << "v2 is empty" << endl;
	}

	vector<int> v3(10, 42);
	if(v3.begin() != v3.end())
	{
		cout << "v3: ";
		for (auto i = v3.begin(); i != v3.end(); ++i)
			cout << *i << " ";
		cout << endl;
	}
	else
	{
		cout << "v3 is empty" << endl;
	}

	vector<int> v4{10};
	if(v4.begin() != v4.end())
	{
		cout << "v4: ";
		for (auto i = v4.begin(); i != v4.end(); ++i)
			cout << *i << " ";
		cout << endl;
	}
	else
	{
		cout << "v4 is empty" << endl;
	}

	vector<int> v5{10, 42};
	if(v5.begin() != v5.end())
	{
		cout << "v5: ";
		for (auto i = v5.begin(); i != v5.end(); ++i)
			cout << *i << " ";
		cout << endl;
	}
	else
	{
		cout << "v5 is empty" << endl;
	}

	vector<string> v6{10};
	if(v6.begin() != v6.end())
	{
		cout << "v6: ";
		for (auto i = v6.begin(); i != v6.end(); ++i)
		{
			if(!i->empty())
				cout << *i << " ";
			else
				cout << "empty" << " ";

		}
		cout << endl;
	}
	else
	{
		cout << "v6 is empty" << endl;
	}

	vector<string> v7{10, "hi"};
	if(v7.begin() != v7.end())
	{
		cout << "v7: ";
		for (auto i = v7.begin(); i != v7.end(); ++i)
			cout << *i << " ";
		cout << endl;
	}
	else
	{
		cout << "v7 is empty" << endl;
	}

	return 0;
}
