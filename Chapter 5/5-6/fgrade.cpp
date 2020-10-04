#include "fgrade.h"
#include "grade.h"


bool fgrade(const student_info& s)
{
	return grade(s) < 60;
}
