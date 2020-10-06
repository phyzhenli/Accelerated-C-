//grade函数的源文件
#include "grade.h" 
#include "median.h"
#include "student_info.h"
#include <numeric>
#include <algorithm>

using std::domain_error;
using std::vector;
using std::remove_copy;
using std::ostream;
using std::accumulate;

double grade(double midterm, double final, double homework)
{
	return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw)
{
	if (hw.size() == 0)
		throw domain_error("student has no homework");
	return grade(midterm, final, median(hw));
}

double grade(const student_info& s)
{
	return grade(s.midterm, s.final, s.homework);
}


double grade_aux(const student_info& s)
{
	try {
		return grade(s);
	} catch (domain_error) {
		return grade(s.midterm, s.final, 0);
	}
}

double average(const vector<double>& v)
{
	return accumulate(v.begin(), v.end(), 0.0) / v.size();
}

double average_grade(const student_info& s)
{
	return grade(s.midterm, s.final, average(s.homework));
}

double optimistic_median(const student_info& s)
{
	vector<double> nozero;
	remove_copy(s.homework.begin(), s.homework.end(), back_inserter(nozero), 0);

	if (nozero.empty())
		return grade(s.midterm, s.final, 0);
	else
		return grade(s.midterm, s.final, median(nozero));
}