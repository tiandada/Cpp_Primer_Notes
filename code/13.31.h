#ifndef _13_30_H
#define _13_30_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class HasPtr {
public:
	friend void swap(HasPtr&, HasPtr&);
	friend bool operator<(const HasPtr &lhs, const HasPtr &rhs);
	HasPtr(const string &s = string()) : ps(new string(s)), i(0) { }
	HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i) { }
	HasPtr& operator=(HasPtr tmp)
	{
		this->swap(tmp);
		return *this;
	}
	~HasPtr()
	{
		delete ps;
	}
	void swap(HasPtr &rhs)
	{
		using std::swap;
		swap(ps, rhs.ps);
		swap(i, rhs.i);
		cout << "call swap(HasPtr &rhs)" << endl;
	}
	void show() const { cout << *ps << endl; }
private:
	string *ps;
	int i;
};

void swap(HasPtr& lhs, HasPtr& rhs)
{
	lhs.swap(rhs);
}

bool operator<(const HasPtr &lhs, const HasPtr &rhs)
{
	return *lhs.ps < *rhs.ps;
}

#endif
