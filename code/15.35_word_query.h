#ifndef _15_35_WORD_QUERY_H
#define _15_35_WORD_QUERY_H

#include "15.35_query_base.h"

class WordQuery : public Query_base {
	friend class Query;
	WordQuery(const std::string &s) : query_word(s) { std::cout << "WordQuery::WordQuery(" + s + ")\n"; }
	QueryResult eval(const TextQuery &t) const override { return t.query(query_word); }
	std::string rep() const override { std::cout << "WordQuery::rep()\n"; return query_word; }
	std::string query_word;
};

#endif
