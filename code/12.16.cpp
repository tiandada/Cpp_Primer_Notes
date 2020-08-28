#include <iostream>
#include <string>
#include <memory>

using std::cout;
using std::endl;
using std::string;
using std::unique_ptr;

int main()
{
	unique_ptr<string> p1(new string("test"));
	//unique_ptr<string> p2(p1);
	unique_ptr<string> p3 = p1;
	return 0;
}
