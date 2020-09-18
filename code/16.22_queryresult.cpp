#include "16.22_queryresult.h"

inline QueryResult::QueryResult(const QueryResult &qr) : counter(qr.getCounter()), queryWord(qr.getQueryWord()), sp_file(qr.getSp_file()), sp_Qmap(qr.getSp_Qmap()) { }

QueryResult::QueryResult(std::size_t c, const std::string &str, const TextQuery::sp_file_Tp &sp_f, const TextQuery::sp_Qmap_Tp &sp_m) { }

void print(std::ostream &os, const QueryResult &qr)
{
	const std::string queryWord = qr.getQueryWord();
	os << "The word p["
	   << queryWord
	   << "] occurs "
	   << qr.getCounter()
	   << " times :\n";
	auto sp_m = qr.getSp_Qmap();
	auto sp_f = qr.getSp_file();

	for(const auto &index : (*sp_m)[queryWord])
		std::cout << "\n(Line " << index << ") " << (*sp_f)[index] << "\n\n";
}
