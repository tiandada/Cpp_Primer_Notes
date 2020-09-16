#ifndef _15_35_QUERY_BASE_H
#define _15_35_QUERY_BASE_H

#include <iostream>
#include <string>
#include "15.35_text_query.h"
#include "15.35_query_result.h"

class Query_base {
	friend class Query;
protected:
	using line_no = TextQuery::line_no;
	virtual ~Query_base() = default;
private:
	virtual QueryResult eval(const TextQuery&) const = 0;
	virtual std::string rep() const = 0;
};

#endif
