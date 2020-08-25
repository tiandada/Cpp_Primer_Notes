#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> iv = {0,1,2,3,4,5,6};
	/**
	for(auto &i : iv)
	{
		if(i%2 != 0)
			i = i * 2;
	}
	for(auto i : iv)
		cout << i << " ";
		**/
	for (auto i : iv)
		cout << ((i % 2 != 0) ? i*2 : i) << " ";
	cout << endl;
	return 0;

}
