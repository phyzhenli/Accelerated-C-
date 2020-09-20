#include "square.h"
#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::setw;
using std::string;
using std::setprecision;
using std::streamsize;

int main()
{	
	cout << "Please enter your min number:" << endl;
	string min_s;
	cin >> min_s;
	cout << "Please enter your max number:" << endl;
	string max_s;
	cin >> max_s;

	cout << endl << "min: " << min_s << endl << "max: " << max_s << endl << endl;
	
	string::size_type min_count = min_s.size();
	string::size_type max_count = max_s.size();

	string::size_type maxlen = (min_count > max_count) ? min_count : max_count;

	double min = stod(min_s);
	double max = stod(max_s);
	
	streamsize prec = cout.precision();
	
	for (double  i = min; i <= max; ++i) {
		cout << setprecision(10) << setw(maxlen) << i << "  " << square(i) << setprecision(prec) << endl;
		min += 1;
	}

	return 0;
}
