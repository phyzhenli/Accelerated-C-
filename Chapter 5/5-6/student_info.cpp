//student_info的源文件
#include <iostream>
#include "student_info.h"

using std::istream;
using std::vector;
using std::cout;
using std::endl;

bool compare(const student_info& x, const student_info& y)
{
        return x.name < y.name;
}

istream& read(istream& is, student_info& s)
{
	cout << "Please enter your name:" << endl;
	is >> s.name;
	cout << "Please enter your midterm:" << endl;
	is >> s.midterm;
	cout << "Please enter your final:" << endl;
	is >> s.final;
	cout << "Please enter your homework, separate by space or enter, ended by < Ctrl + D >:" << endl;
	read_hw(is, s.homework);
	return is;
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
