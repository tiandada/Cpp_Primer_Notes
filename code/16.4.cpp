#include <iostream>
#include <string>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::list;

template<typename Iterator, typename Value>
auto find(Iterator first, Iterator last, Value const &value)
{
	for(;first != last && *first != value; ++first)
	return first;
}

int main()
{
	vector<int> v{1,2,3,4,5,6,7,8};
	auto is_in_vector = v.cend() != find(v.cbegin(), v.cend(), 5);
	cout << (is_in_vector ? "found\n" : "not found\n");
	list<string> l{"aa", "bb", "cc", "dd"};
	auto is_in_list = l.cend() != find(l.cbegin(), l.cend(), "bb");
	cout << (is_in_list ? "found\n" : "not fount\n");
	return 0;
}
