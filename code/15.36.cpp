#include "15.35_query.h"
#include "15.35_query_base.h"
#include "15.35_query_result.h"
#include "15.35_text_query.h"
#include "15.35_word_query.h"
#include "15.35_binary_query.h"
#include "15.35_andquery.h"
#include "15.35_orquery.h"
#include "15.35_notquery.h"

int main()
{
	Query q = Query("fiery") & Query("bird") | Query("wind");
	return 0;
}
