#include "15.35_orquery.h"
#include "15.35_text_query.h"
#include "15.35_query_result.h"

QueryResult OrQuery::eval(const TextQuery &text) const
{
    QueryResult right = rhs.eval(text), left= lhs.eval(text);

    // copy the left-hand operand into the result set
    std::shared_ptr<std::set<line_no>> ret_lines =
            std::make_shared<std::set<line_no>>(left.begin(), left.end());

    // inert lines from the right-hand operand
    ret_lines->insert(right.begin(), right.end());

    return QueryResult(rep(), ret_lines, left.get_file());
}

