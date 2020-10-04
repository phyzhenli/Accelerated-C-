#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <algorithm>
#include "grade.h" 
#include "median.h"
#include "extract_fails.h"
#include "mystruc.h"


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
	mystruc students;
	mystruc fail;
	student_info record;
	string::size_type maxlen = 0;

	while (read(cin, record)) {
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);
		cout << endl;
	}

	//students.sort(compare);
	sort(students.begin(), students.end(), compare);
	students = extract_fails(students);	

	//list不支持索引，所以不能用list[i]
	
	cout << "PASS:" << endl;
	for (mystruc::iterator iter = students.begin(); iter != students.end(); ++iter) {
		cout << setw(maxlen) << (*iter).name << " ";

		try {
			double final_grade = grade(*iter);
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade << setprecision(prec) << endl;
		} catch (domain_error e) {
			cout << e.what() << endl;
		}
	}


	return 0;
}
