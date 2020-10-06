#include "split.h"
#include "frame.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string s;
	vector<string> ret;
	vector<string> vec = frame(ret);

	cout << endl << vec.size() << endl;
	for (vector<string>::size_type i = 0; i != vec.size(); ++i)
			cout << endl << vec[i] << endl;
	
	
	return 0;
}
