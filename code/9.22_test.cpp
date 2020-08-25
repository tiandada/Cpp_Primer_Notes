#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> iv = {0,1,2,3,4,5,6,7,8,9};
	auto iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
	cout << "iv's size() " << iv.size() << endl;
	iv.insert(iter, -1);
	cout << "capacity = " << iv.capacity() << endl;
	cout << "iter's pos: " << iter - iv.begin() << endl;
	cout << "mid's pos: " << mid - iv.begin() << endl;
	return 0;
}
