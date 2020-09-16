#ifndef _15_35_QUERY_H
#define _15_35_QUERY_H
#include "15.35_query_base.h"
#include "15.35_query_result.h"
#include "15.35_text_query.h"
#include "15.35_word_query.h"
#include <iostream>
#include <string>
#include <memory>

class Query {
	friend Query operator~(const Query&);
	friend Query operator|(const Query&, const Query&);
	friend Query operator&(const Query&, const Query&);
public:
	Query(const std::string &s) : q(new WordQuery(s)) { std::cout << "Query::Query(const std::string &s) where s="+s+"\n"; }
	QueryResult eval(const TextQuery &t) const { return q->eval(t); }
	std::string rep() const { std::cout << "Query::rep() \n"; return q->rep(); }
private:
	Query(std::shared_ptr<Query_base> query) : q(query) 
	{ 
		std::cout << "Query::Query(std::shared_ptr<Query_base> query)\n";
	}
	std::shared_ptr<Query_base> q;
};

inline std::ostream& operator<<(std::ostream& os, const Query& query)
{
	return os << query.rep();
}

#endif
