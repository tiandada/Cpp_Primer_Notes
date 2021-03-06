#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
	int i,j;
	while (cin >> i >> j)
	{
		try 
		{
			if(j == 0)
				throw runtime_error("divesor is 0");
			cout << i / j << endl;
		}
		catch(std::runtime_error err)
		{
			cout << err.what()
		     	     << "\nTry Again? Enter y or n " << endl;
			char c;
			cin >> c;
			if(!cin || c == 'n')
				break;
		}
	}
	
	return 0;
}
