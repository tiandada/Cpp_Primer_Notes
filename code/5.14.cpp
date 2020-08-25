#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s, maxS;
	string pres = "";
	int cunt, maxCnt = 1;
	while(cin >> s)
	{
		if(s == pres)	
		{
			++cunt;
			if(cunt >= maxCnt)
			{	
				maxCnt = cunt;
				maxS = s;
			}
		}
		else
		{
			cunt = 1;
		}
		pres = s;
	}
	cout << maxS << " " << maxCnt << endl;
	return 0;
}
