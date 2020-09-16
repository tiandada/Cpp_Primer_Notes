#include "15.35_query_result.h"

std::ostream& print(std::ostream &os, const QueryResult &qr)
{
	os << qr.sought << " occurs " <<  qr.sp_lines->size() << (qr.sp_lines->size() > 1 ? " times" : " time") << std::endl;

	for(auto &index : *qr.sp_lines)
	{
		os << "\tCline" << index + 1 << ")";
		const ConstStrBlobPtr wp(qr.file, index);
		os << wp.deref() << "\n";
	}
	return os;
}

