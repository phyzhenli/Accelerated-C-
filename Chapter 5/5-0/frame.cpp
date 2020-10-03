#include "frame.h"
#include "width.h"
#include <iostream>
using std::vector;
using std::string;
using std::max;

vector<string> frame(const vector<string>& v)
{
	vector<string> ret;
	string::size_type maxlen = width(v);

	string border(maxlen + 4, '*');
	ret.push_back(border);

	for (vector<string>::size_type i = 0; i != v.size(); ++i) {
		ret.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *");
	}

	ret.push_back(border);
	return ret;
}
