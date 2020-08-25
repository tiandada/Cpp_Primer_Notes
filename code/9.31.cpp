#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::forward_list;

int main()
{
	//list<int> vi = {0,1,2,3,4,5,6,7,8,9};
	forward_list<int> vi = {0,1,2,3,4,5,6,7,8,9};

	auto prev = vi.before_begin();
	auto iter = vi.begin();

	while (iter != vi.end())
	{
		if (*iter % 2)
		{
			//iter = vi.insert(iter, *iter);
			//++iter;
			//++iter;
			iter = vi.insert_after(prev, *iter);
			++iter;
			prev = iter;
			++iter;
		}
		else
		{
			//iter = vi.erase(iter);
			iter = vi.erase_after(prev);
		}
	}
	for(auto i : vi)
		cout << i << " ";
	cout << endl;
	return 0;
}
