#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;
	for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
	{
		ivec.push_back(ix);
	}
	cout << "before: " ;
	for (auto i = ivec.cbegin(); i != ivec.cend(); ++i)
		cout << *i << " ";
	cout << endl;
	for (auto i = ivec.begin(); i != ivec.end(); ++i)
	{
		*i = *i * 2;
	}
	cout << "after: ";
	for (auto i = ivec.cbegin(); i != ivec.cend(); ++i)
		cout << *i << " ";
	cout << endl;
	return 0;

}
