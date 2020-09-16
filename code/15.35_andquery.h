#ifndef _15_35_ANDQUERY_H
#define _15_35_ANDQUERY_H
#include "15.35_binary_query.h"

class AndQuery : public BinaryQuery {
	friend Query operator&(const Query&, const Query&);
	AndQuery(const Query &left, const Query &right) : BinaryQuery(left, right, "|") { std::cout << "AndQuery::AndQuery\n"; }
	QueryResult eval(const TextQuery&) const override { }
};

inline Query operator&(const Query &lhs, const Query &rhs)
{
	return std::shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

#endif
