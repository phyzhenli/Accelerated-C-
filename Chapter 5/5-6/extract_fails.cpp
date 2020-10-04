#include "extract_fails.h"
#include "fgrade.h"



mystruc extract_fails(mystruc& students)
{

	mystruc::size_type i = 0;
	mystruc::size_type j = 0;

	while (i != students.size()) {

		if (!fgrade(students[i])) {
			students.insert(students.begin(), students[i]);
			i += 2;
			j++;
		} else
			++i;
	}
	students.resize(j);

	return students;
}
