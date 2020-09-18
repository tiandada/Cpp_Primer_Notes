#ifndef _16_22_TEXTQUERY_H
#define _16_22_TEXTQUERY_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <map>
#include <set>
#include <memory>

class QueryResult;

class TextQuery {
public:
	typedef std::shared_ptr<std::vector<std::string>> sp_file_Tp;
	typedef std::shared_ptr<std::map<std::string, std::set<int>>> sp_Qmap_Tp;

	TextQuery() = default;
	TextQuery(std::ifstream &fin); 

	QueryResult query(const std::string &) const;
private:
	sp_file_Tp sp_fileData = nullptr;
	sp_Qmap_Tp sp_queryMap = nullptr;
};

#endif
