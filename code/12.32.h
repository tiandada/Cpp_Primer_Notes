#ifndef _12_32_H
#define _12_32_H

#include "12.22.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::map;
using std::vector;
using std::set;
using std::ifstream;
using std::shared_ptr;
using std::istringstream;

class QueryResult;
class TextQuery {
public:
	TextQuery(ifstream &);
	QueryResult query(const string&) const;
private:
	StrBlob file;
	map<string, shared_ptr<set<StrBlob::size_type>>> wm;
};

TextQuery::TextQuery(ifstream &is)
{
	string text;
	while(getline(is, text))
	{
		file.push_back(text);
		int n = file.size() - 1;
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

class QueryResult {
friend ostream& print(ostream &, const QueryResult &);
public:
	QueryResult(const string &s, shared_ptr<set<StrBlob::size_type>> p, const StrBlob& f) : sought(s), lines(p), file(f) { }
private:
	string sought;
	shared_ptr<set<StrBlob::size_type>> lines;
	StrBlob file;
};

QueryResult TextQuery::query(const string &sought) const
{
	static shared_ptr<set<StrBlob::size_type>> nodata(new set<StrBlob::size_type>);
	auto loc = wm.find(sought);
	if(loc == wm.end())
		return QueryResult(sought, nodata, file);
	else
		return QueryResult(sought, loc->second, file);
}

ostream &print(ostream &os, const QueryResult& qr)
{
	os << qr.sought << " occurs " <<  qr.lines->size() << (qr.lines->size() > 1 ? " times" : " time") << endl;
	for(auto num : *qr.lines)
	{
		ConstStrBlobPtr p(qr.file, num);
		os << "\t(line " << num + 1 << ")" << p.deref() << endl;
	}
	return os;
}

#endif
