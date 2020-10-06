#ifndef GUARD_analysis
#define GUARD_analysis

#include "student_info.h"
#include <ostream>


void write_analysis(std::ostream&, const std::string&, double analysis(const std::vector<student_info>&),
                    const std::vector<student_info>&, const std::vector<student_info>&);

double median_analysis(const std::vector<student_info>&);

double average_analysis(const std::vector<student_info>&);

double optimistic_analysis(const std::vector<student_info>&);

#endif