#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const char s1[] = "hello";
	const char s2[] = "world";

	const size_t new_size = strlen(s1) + strlen(" ") + strlen(s2) + 1;
	char cs[new_size];

	strcpy(cs, s1);
	strcat(cs, " ");
	strcat(cs, s2);

	cout << cs << endl;
	return 0;
}
