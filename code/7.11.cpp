#include "7.11.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	Sales_data item1;
	print(cout, item1);
	cout << endl;

	Sales_data item2("0-201-23432-X");
	print(cout, item2);
	cout << endl;

	Sales_data item3("0-201-23432-X", 3, 20.00);
	print(cout, item3);
	cout << endl;

	Sales_data item4(cin);
	print(cout, item4);
	cout << endl;

	return 0;
}
