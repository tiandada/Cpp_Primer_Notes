#include "7.27.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	Screen myScreen(5, 5, 'x');
	myScreen.move(4,0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";

	return 0;
}
