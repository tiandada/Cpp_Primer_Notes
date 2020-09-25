#ifndef _17_3_TEXTQUERY_H
#define _17_3_TEXTQUERY_H

#include "12.22.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <algorithm>
#include <tuple>
#include <memory>

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
using std::tuple;

class QueryResult;
class TextQuery {
public:
	typedef vector<string>::size_type index_Tp;
	typedef tuple<string, std::shared_ptr<set<index_Tp>>, std::shared_ptr<vector<string>>> result_typle;
	TextQuery(ifstream &);
	QueryResult query(const string&) const;
	result_typle query_return_typle(const string& sought);
private:
	std::shared_ptr<vector<string>> file;
	map<string, std::shared_ptr<set<index_Tp>>> wm;
};



class QueryResult {
friend ostream& print(ostream &, const QueryResult &);
public:
	QueryResult(const string &s, shared_ptr<set<StrBlob::size_type>> p, const StrBlob& f) : sought(s), lines(p), file(f) { }
private:
	string sought;
	shared_ptr<set<StrBlob::size_type>> lines;
	StrBlob file;
};


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
