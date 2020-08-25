#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec;// = {1,2,3,4,5,6};
	vector<int> v;
	cout << "vec.at: " << vec.at(0) << endl;
	cout << "vec[]: " << vec[0] << endl;
	cout << "front: " << vec.front() << endl;
	cout << "begin: " << *vec.begin() << endl;
	
	return 0;
}
