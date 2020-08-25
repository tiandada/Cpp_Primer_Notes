#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::istream_iterator;
using std::ostream_iterator;
using std::for_each;

int main(int argc, char **argv)
{
	if(argc < 4)
		return -1;
	ifstream fin(argv[1]);
	ofstream out_f1(argv[2]), out_f2(argv[3]);
	istream_iterator<int> in_iter(fin), eof;
	ostream_iterator<int> out_iter1(out_f1, " ");
	ostream_iterator<int> out_iter2(out_f2, "\n");
	
	for_each(in_iter, eof, [&out_iter1, &out_iter2](const int i){*(i & 0x1 ? out_iter1 : out_iter2)++ = i;});

	return 0;
}
