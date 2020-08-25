#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::end;

int main()
{
	int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
	vector<int> vec(ia, end(ia));
	list<int> lst(vec.begin(), vec.end());

	auto vb = vec.begin();
	auto lb = lst.begin();
	while(vb != vec.end())
	{
		if(*vb % 2 == 0)
			vb = vec.erase(vb);
		else
			++vb;
	}
	while(lb != lst.end())
	{
		if(*lb % 2)
			lb = lst.erase(lb);
		else
			++lb;
	}
	cout << "vec: " << endl;
	for(auto i : vec)
		cout << i << " ";
	cout << endl;
	cout << "list: " << endl;
	for(auto i : lst)
		cout << i << " ";
	cout << endl;
	return 0;
}
