#include "extract_fails.h"
#include "fgrade.h"



mystruc extract_fails(mystruc& students)
{
	mystruc fail;
	mystruc::iterator iter = students.begin();

	while (iter != students.end()) {
		if (fgrade(*iter)) {
			fail.push_back(*iter);
			iter = students.erase(iter);
		} else
			++iter;
	}
	return fail;
}
