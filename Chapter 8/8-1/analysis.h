#ifndef GUARD_analysis
#define GUARD_analysis

#include "student_info.h"
#include <ostream>

template <class Function>
void write_analysis(std::ostream& out, const std::string& name, Function analysis, const std::vector<student_info>& did, const std::vector<student_info>& didnt)
{
    out << std::endl << name << "(did) = " << analysis(did) << std::endl
                << name << "(didnt) = " << analysis(didnt) << std::endl;
};

double median_analysis(const std::vector<student_info>&);

double average_analysis(const std::vector<student_info>&);

double optimistic_analysis(const std::vector<student_info>&);


#endif