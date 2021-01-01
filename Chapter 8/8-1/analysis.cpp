#include "analysis.h"
#include "grade.h"
#include "median.h"
#include <algorithm>
#include <iostream>

using std::vector;
using std::string;
using std::transform;
using std::ostream;
using std::endl;


double median_analysis(const vector<student_info>& students)
{
	vector<double> grades;

	transform(students.begin(), students.end(), back_inserter(grades), grade_aux);
	return median(grades);
}

double average_analysis(const vector<student_info>& students)
{
    vector<double> grades;

    transform(students.begin(), students.end(), back_inserter(grades), average_grade);
    return median(grades);
}

double optimistic_analysis(const vector<student_info>& students)
{
    vector<double> grades;
    transform(students.begin(), students.end(), back_inserter(grades), optimistic_median);
    return median(grades);
}