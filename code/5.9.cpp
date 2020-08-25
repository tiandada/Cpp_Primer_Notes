#include <iostream>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch)
	{
		switch (ch)
		{
			case 'a':
				++aCnt;
				break;
			case 'e':
				++eCnt;
				break;
			case 'i':
				++iCnt;
				break;
			case 'o':
				++oCnt;
				break;
			case 'u':
				++uCnt;
				break;
		}
	}
	cout << "number of vowel a: \t" << aCnt << '\n'
	     << "number of vowel e: \t" << eCnt << '\n'
	     << "number of vowel i: \t" << iCnt << '\n'
	     << "number of vowel o: \t" << oCnt << '\n'
	     << "number of vowel u: \t" << uCnt << endl;
	return 0;
}
