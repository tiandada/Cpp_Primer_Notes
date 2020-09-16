#ifndef _15_35_QUERY_RESULT_H
#define _15_35_QUERY_RESULT_H
#include "15.35_text_query.h"
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <set>

class QueryResult {
	friend std::ostream& print(std::ostream&, const QueryResult&);
public:
	QueryResult(std::string s, std::shared_ptr<std::set<TextQuery::line_no>> sp_l, StrBlob f) : sought(s), sp_lines(sp_l), file(f) { }
	const StrBlob& get_file() const { return file; }
	std::set<TextQuery::line_no>::iterator begin() { return sp_lines->begin(); }
	std::set<TextQuery::line_no>::iterator end() { return sp_lines->end(); }
private:
	std::string sought;
	std::shared_ptr<std::set<TextQuery::line_no>> sp_lines;
	StrBlob file;
};

std::ostream& print(std::ostream&, const QueryResult &);

#endif

