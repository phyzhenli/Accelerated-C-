#include "is_palindrome.h"
#include <algorithm>

using std::string;
using std::equal;

bool is_palindrome(const string& s)
{
	return equal(s.begin(), s.end(), s.rbegin());
}
