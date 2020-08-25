#include <iostream>
#include <string>
using namespace std;

int main()
{
	int grade;
	cin >> grade;
	string finalgrade;
	finalgrade = (grade > 90) ? "hige pass" : ((grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass");
	cout << finalgrade << endl;

	cout << "=========" << endl;

	if(grade > 90)
		cout << "hige pass" << endl;
	else if(grade < 60)
		cout << "fail" << endl;
	else if(grade < 75)
		cout << "low pass" << endl;
	else
		cout << "pass";

	return 0;
}
