#include <iostream>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, linefeedCnt = 0;
	char ch;
	while (cin >> std::noskipws >> ch)
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
			case ' ':
				++spaceCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++linefeedCnt;
				break;
		}
	}
	cout << "number of vowel a: \t" << aCnt << '\n'
	     << "number of vowel e: \t" << eCnt << '\n'
	     << "number of vowel i: \t" << iCnt << '\n'
	     << "number of vowel o: \t" << oCnt << '\n'
	     << "number of vowel u: \t" << uCnt << '\n'
	     << "number of sapce: \t" << spaceCnt << '\n'
	     << "number of tab:   \t" << tabCnt << '\n'
	     << "number of linefeed: \t" << linefeedCnt << endl;
	return 0;
}
