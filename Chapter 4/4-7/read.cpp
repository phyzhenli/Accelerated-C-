#include "read.h"


using std::istream;
using std::vector;

istream& read(istream& in, vector<double>& numbers)
{
	if (in) {
		numbers.clear();

		double x;
		while (in >> x)
			numbers.push_back(x);

		in.clear();
	}

	return in;
}
