#include "vcat.h"


using std::vector;
using std::string;

vector<string> vcat(const vector<string>& top, const vector<string>& bottom)
{
	vector<string> ret = top;

	ret.insert(ret.end(), bottom.begin(), bottom.end());

	return ret;
}
