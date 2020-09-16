#ifndef _15_35_BINARY_QUERY_H
#define _15_35_BINARY_QUERY_H

#include "15.35_query.h"
#include "15.35_query_base.h"

class BinaryQuery : public Query_base {
protected:
	BinaryQuery(const Query &l, const Query &r, std::string s) : lhs(l), rhs(r), opSym(s) { std::cout << "BinaryQuery::BinaryQuery() where s=" + s + "\n"; }
	std::string rep() const override
	{
		std::cout << "BinaryQuery::rep()\n";
		return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")";
	}

	Query lhs, rhs;
	std::string opSym;
};

#endif
