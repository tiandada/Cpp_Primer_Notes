#ifndef _15_35_TEXT_QUERY_H
#define _15_35_TEXT_QUERY_H
#include "12.22.h"
#include <map>
#include <set>
#include <string>
#include <memory>
#include <fstream>

class QueryResult;

class TextQuery {
public:
	typedef StrBlob::size_type line_no;
	TextQuery(std::ifstream &);
	QueryResult query(const std::string &) const;
private:
	StrBlob file;
	std::map<std::string, std::shared_ptr<std::set<line_no>>> wordMap;
};

#endif
