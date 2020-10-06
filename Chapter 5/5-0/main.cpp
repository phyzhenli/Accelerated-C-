#include "split.h"
#include "frame.h"
#include "vcat.h"
#include "hcat.h"
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

	while (getline(cin, s)) { 
		vector<string> v = split(s);
		ret.insert(ret.end(), v.begin(), v.end());
	}

	vector<string> vec = frame(ret);
	vector<string> vecc = vcat(ret, vec);
	vector<string> vech = hcat(ret, vec);
	for (vector<string>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
			cout << endl << *iter << endl;
	
	
	return 0;
}
