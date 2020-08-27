#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int>* make()
{
	auto v = new vector<int>();
	return v;
}

vector<int> *save(vector<int> *vec)
{
	int i;
	while(cin >> i)
		vec->push_back(i);
	return vec;
}

void print(vector<int> *vec)
{
	for(auto i : *vec)
		cout << i << " ";
	cout << endl;
	delete vec;
}

int main()
{
	print(save(make()));
	return 0;	
}
