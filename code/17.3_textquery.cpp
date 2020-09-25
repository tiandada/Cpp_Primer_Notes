#include "17.3_textquery.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <sstream>

TextQuery::TextQuery(ifstream &is) : file(new vector<string>)
{
	string text;
	while(getline(is, text))
	{
		file->push_back(text);
		int n = file->size() - 1;
		istringstream line(text);
		string word;
		while(line >> word)
		{
			auto &lines = wm[word];
			if(!lines)
				lines.reset(new set<StrBlob::size_type>);
			lines->insert(n);
		}
	}
}

QueryResult TextQuery::query(const string &sought) const
{
	static std::shared_ptr<set<index_Tp>> nodata(new set<index_Tp>);
	auto loc = wm.find(sought);
	if(loc == wm.end())
		return QueryResult(sought, nodata, file);
	else
		return QueryResult(sought, loc->second, file);
}

result_tuple TextQuery::query_return_tuple(const string &sought)
{
	static std::shared_ptr<set<intdex_Tp>> noData(new set<index_Tp>);
	auto iter = wm.find(sought);
	if(iter == wm.end())
		return result_tuple(sought, noData, file);
	else
		return result_tuple(sought, iter->second, file);
}


void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while(true)
	{
		cout << "enter word to look for, or q to quit: ";
		string s;
		if(!(cin >> s) || s == "q")
			break;
		print(cout, tq.query(s)) << endl;
	}
}

