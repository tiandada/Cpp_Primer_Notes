#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;
	int i;
	while(cin >> i)
	{
		ivec.push_back(i);
	}
	//for (decltype(ivec.size()) ix = 0; ix != ivec.size()-1; ++ix)
	//	cout << ivec[ix] + ivec[ix+1] << endl;
	for (decltype(ivec.size()) ix = 0; ix != ivec.size(); ++ix)
		cout << ivec[ix] + ivec[ivec.size()-ix-1] << endl;
	
	return 0;
}
