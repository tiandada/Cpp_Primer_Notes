#include "15.35_text_query.h"
#include "15.35_query_result.h"
#include <sstream>
#include <iostream>
#include <iterator>

TextQuery::TextQuery(std::ifstream &is) : file(StrBlob()), wordMap(std::map<std::string, std::shared_ptr<std::set<line_no>>>())
{
	std::string text;
	while(std::getline(is, text))
	{
		file.push_back(text);
		int n = file.size() - 1;
		std::stringstream line(text);
		std::string word;
		while(line >> word)
		{
			auto &lines = wordMap[word];
			if(!lines)
				lines.reset(new std::set<line_no>);
			lines->insert(n);
		}
	}
}

QueryResult TextQuery::query(const std::string &sought) const
{
	static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
	auto loc = wordMap.find(sought);
	if(loc == wordMap.end())
		return QueryResult(sought, nodata, file);
	else
		return QueryResult(sought, loc->second, file);
}

