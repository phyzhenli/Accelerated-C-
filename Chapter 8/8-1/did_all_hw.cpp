#include "did_all_hw.h"
#include <algorithm>

using std::find;

bool did_all_hw(const student_info& s)
{
    return (find(s.homework.begin(), s.homework.end(), 0) == s.homework.end());
}