#include "space.h"
#include <cctype>

using std::isspace;

bool space(char c)
{
	return isspace(c);
}

bool not_space(char c)
{
	return !isspace(c);
}
