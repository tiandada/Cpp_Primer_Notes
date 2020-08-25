#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::istream_iterator;

int main()
{
	ifstream f("book.txt");
	if(!f)
		return -1;
	vector<string> vec;
	istream_iterator<string> in_iter(f);
	istream_iterator<string> eof;
	while(in_iter != eof)
		vec.push_back(*in_iter++);

	for(auto i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}
