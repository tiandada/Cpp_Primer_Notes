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
			case 'A':
				++aCnt;
				break;
			case 'e':
			case 'E':
				++eCnt;
				break;
			case 'i':
			case 'I':
				++iCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
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
