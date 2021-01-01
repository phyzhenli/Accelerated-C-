//student_info的源文件
#include <iostream>
#include <fstream>
#include "split.h"
#include "student_info.h"

using std::istream;
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;


bool compare(const student_info& x, const student_info& y)
{
        return x.name < y.name;
}

void read(string& s, student_info& record)
{
		vector<string> v;
		split(s, back_inserter(v));
		record.name = v[0];
		record.final = stod(v[1]);
		record.midterm = stod(v[2]);
		record.homework.clear();
		record.homework.push_back(stod(v[3]));
		record.homework.push_back(stod(v[4]));
		record.homework.push_back(stod(v[5]));
}

istream& read_hw(istream& in, vector<double>& hw)
{
	if (in) {
		hw.clear();

		double x;
		while (in >> x)
			hw.push_back(x);
		in.clear();
	}
	return in;
} 