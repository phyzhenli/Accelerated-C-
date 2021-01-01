#ifndef GUARD_student_info
#define GUARD_student_info

//student_info.h

#include <istream>
#include <string>
#include <vector>

struct student_info {
	std::string name;
	double midterm, final;
	std::vector<double> homework;
};

bool compare(const student_info&, const student_info&);
void read(std::string&, student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif
