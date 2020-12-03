#include "not_url_char.h"
#include <algorithm>
#include <string>

using std::string;
using std::isalnum;

bool not_url_char(char c)
{
	static const string url_ch = "~;/?:@=&$-_.+*'(),";
	return !(isalnum(c) || find(url_ch.begin(), url_ch.end(), c) != url_ch.end());
}
