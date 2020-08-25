#include <iostream>
#include <stack>
#include <string>

using std::cout;
using std::endl;
using std::stack;
using std::string;

int main()
{
	string str("s = (1+1)");
	stack<char> stk;
	bool spush = false;
	for (auto const &i : str)
	{
		if(i == '(')
		{
			spush = true;
			continue;
		}
		if(i == ')')
			spush = false;
		if(spush)
			stk.push(i);
	}
	string rep;
	while(!stk.empty())
	{
		rep += stk.top();
		stk.pop();
	}
	str.replace(str.find("(")+1, rep.size(), rep);
	cout << str << endl;
	return 0;
}
