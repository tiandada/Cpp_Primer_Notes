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
	for (auto ix = ivec.begin(); (ix+1)!= ivec.end(); ++ix)
	{
		cout << *ix + *(ix+1) << endl;
	}
	return 0;
}
