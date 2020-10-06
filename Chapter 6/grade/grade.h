#ifndef GUARD_grade_h
#define GUARD_grade_h

//grade.h


#include "student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const student_info&);

double grade_aux(const student_info&);

double average(const std::vector<double>&);
double average_grade(const student_info&);

double optimistic_median(const student_info&);
#endif
