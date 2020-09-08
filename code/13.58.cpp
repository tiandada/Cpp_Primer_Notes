#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;

class Foo {
public:
	Foo sorted() &&;
	Foo sorted() const &;
private:
	vector<int> data;
};

Foo Foo::sorted() &&
{
	sort(data.begin(), data.end());
	cout << "&&" << endl;
	return *this;
}

Foo Foo::sorted() const &
{
	Foo ret(*this);
	sort(ret.data.begin(), ret.data.end());
	cout << "const &" << endl;
	return ret;
}

int main()
{
	Foo().sorted();
	Foo f;
	f.sorted();
}
