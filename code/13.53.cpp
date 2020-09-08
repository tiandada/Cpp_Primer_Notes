#include "13.53.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
	cout << "call swap" << endl;
}

HasPtr::HasPtr(const string &s) : ps(new string(s)), i(0)
{
	cout << "call constructor" << endl;
}

HasPtr::HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i)
{
	cout << "call copy constructor" << endl;
}

HasPtr::HasPtr(HasPtr &&p) noexcept : ps(p.ps), i(p.i)
{
	p.ps = 0;
	cout << "call move constructor" << endl;
}

HasPtr& HasPtr::operator=(HasPtr rhs)
{
	swap(*this, rhs);
	return *this;
}

HasPtr::~HasPtr()
{
	cout << "call destructor" << endl;
	delete ps;
}

int main()
{
	HasPtr hp1("hello"), hp2("world"), *pH = new HasPtr("world");
	hp1 = hp2;
	hp1 = std::move(*pH);
	return 0;
}
