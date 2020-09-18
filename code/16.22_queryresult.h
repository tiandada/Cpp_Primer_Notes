#ifndef _16_22_QUERYRESULT_H
#define _16_22_QUERYRESULT_H
#include "16.22_textquery.h"

class QueryResult {
public:
	QueryResult() = default;
	QueryResult(const QueryResult &qr);
	QueryResult(std::size_t c, const std::string &str, const TextQuery::sp_file_Tp &sp_f, const TextQuery::sp_Qmap_Tp &sp_m);
	std::size_t getCounter() const { return counter; }
	std::string getQueryWord() const { return queryWord; }
	TextQuery::sp_file_Tp getSp_file() const { return sp_file; }
	TextQuery::sp_Qmap_Tp getSp_Qmap() const { return sp_Qmap; }
private:
	std::size_t counter = 0;
	std::string queryWord = "";
	TextQuery::sp_file_Tp sp_file = nullptr;
	TextQuery::sp_Qmap_Tp sp_Qmap = nullptr;
};

void print(std::ostream &os, const QueryResult &qr);

#endif
