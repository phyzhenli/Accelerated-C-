#include "grade.h" 
#include "median.h"
#include "did_all_hw.h"
#include "analysis.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;

int main()
{
	ifstream infile("score.txt");
	string s;

	vector<student_info> did, didnt;
	student_info record;


	while (getline(infile, s)) {
		read(s, record);
		if (did_all_hw(record))
			did.push_back(record);
		else
			didnt.push_back(record);
	}


	if (did.empty()) {
		cout << endl << "No student did all homework!" << endl;
		return 1;
	}

	if (didnt.empty()) {
		cout << endl << "Every student did all homework!" << endl;
		return 1;
	}
	
	write_analysis(cout, "median", median_analysis, did, didnt);
	write_analysis(cout, "average", average_analysis, did, didnt);
	write_analysis(cout, "optimistic", optimistic_analysis, did, didnt);

	return 0;
}
