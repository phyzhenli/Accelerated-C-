#include "split.h"
#include "frame.h"
//#include "vcat.h"
//#include "hcat.h"
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
	//vector<string> vecc = vcat(ret, vec);
	//vector<string> vech = hcat(ret, vec)
	for (vector<string>::size_type i = 0; i != vec.size(); ++i)
			cout << endl << vec[i] << endl;
	
	
	return 0;
}
