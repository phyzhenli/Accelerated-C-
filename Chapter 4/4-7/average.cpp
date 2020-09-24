#include "average.h"
#include <stdexcept>

using std::vector;
using std::domain_error;

double average(vector<double> numbers)
{
	if (numbers.size() == 0)
		throw domain_error("Error: numbers is an empty vector");
	
	double sum = 0;
	for (vector<double>::size_type i = 0; i != numbers.size(); ++i)
		sum += numbers[i];

	return sum/numbers.size();
}
