#include "grade.h" 
#include "median.h"
#include "did_all_hw.h"
#include "analysis.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::streamsize;
using std::setprecision;
using std::domain_error;
using std::max;
using std::sort;
using std::setw;

int main()
{
	vector<student_info> did, didnt;
	student_info record;
	string::size_type maxlen = 0;

	while (read(cin, record)) {
		maxlen = max(maxlen, record.name.size());
		if (did_all_hw(record))
			did.push_back(record);
		else
			didnt.push_back(record);
		cout << endl;
	}

	if (did.empty()) {
		cout << endl << "No student did all homework!" << endl;
		return 1;
	}

	if (didnt.empty()) {
		cout << endl << "Every student did all homework!" << endl;
	}
	
	write_analysis(cout, "median", median_analysis, did, didnt);
	write_analysis(cout, "average", average_analysis, did, didnt);
	write_analysis(cout, "optimistic", optimistic_analysis, did, didnt);

	return 0;
}
