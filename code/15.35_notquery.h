#ifndef _15_35_NOTQUERY_H
#define _15_35_NOTQUERY_H

#include "15.35_query.h"
#include "15.35_query_base.h"

class NotQuery : public Query_base {
	friend Query operator~(const Query& operand);
	NotQuery(const Query &q) : query(q) { std::cout << "NotQuery::NotQuery()\n"; }
	std::string rep() const override
	{
		std::cout << "NotQuery::rep()\n";
		return "~(" + query.rep() + ")";
	}
	QueryResult eval(const TextQuery &) const override;
	Query query;

};

inline Query operator~(const Query &operand)
{
	return std::shared_ptr<Query_base>(new NotQuery(operand));
}

#endif
