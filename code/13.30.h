#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class HasPtr {
public:
	friend void swap(HasPtr&, HasPtr&);
	HasPtr(const string &s = string()) : ps(new string(s)), i(0) { }
	HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i) { }
	HasPtr& operator=(const HasPtr &hp)
	{
		auto new_p = new string(*hp.ps);
		delete ps;
		ps = new_p;
		i = hp.i;
		return *this;
	}
	~HasPtr()
	{
		delete ps;
	}
	void show() { cout << *ps << endl; }
private:
	string *ps;
	int i;
};

inline
void swap(HasPtr& lhs, HasPtr& rhs)
{
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
	cout << "call swap(HasPtr& lhs, HasPtr& rhs)" << endl;
}
