#include <iostream>
#include <string>
#include <memory>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::allocator;

int main()
{
	int n = 5;
	allocator<string> alloc;
	auto const p = alloc.allocate(n);
	string s;
	auto q = p;
	while(cin >> s && q != p + n)
		alloc.construct(q++, s);
	while(q != p)
	{
		cout << *--q << endl;
		alloc.destroy(q);
	}

	alloc.deallocate(p, n);
	return 0;
}
