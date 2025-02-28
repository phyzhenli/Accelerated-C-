#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <algorithm>
#include "grade.h" 
#include "median.h"

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
	vector<student_info> students;
	student_info record;
	string::size_type maxlen = 0;

	while (read(cin, record)) {
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);
		cout << endl;
	}
	
	sort(students.begin(), students.end(), compare);

	for (std::vector<student_info>::size_type i = 0; i != students.size(); ++i) {
		cout << setw(maxlen) << students[i].name << " ";

		try {
			double final_grade = grade(students[i]);
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade << setprecision(prec) << endl;
		} catch (domain_error e) {
			cout << e.what() << endl;
		}
	}


	return 0;
}
