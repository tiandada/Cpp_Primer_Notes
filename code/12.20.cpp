#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "12.19.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;


StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
	return StrBlobPtr(*this, data->size());
}

int main()
{
	ifstream inf("book.txt");
	StrBlob blob;
	for (string str; getline(inf, str);)
		blob.push_back(str);
	for(StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend; pbeg.incr())
		cout << pbeg.deref() << endl;
	return 0;
}
