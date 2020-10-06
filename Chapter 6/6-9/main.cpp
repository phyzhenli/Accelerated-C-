#include "split.h"
#include <iostream>


using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main()
{   
    cout << "Input:" << endl;
    string s;
    vector<string> ret;
    while (getline(cin, s)) {
        vector<string> v = split(s);
        ret.insert(ret.end(), v.begin(), v.end());
    }

    string str;
    for (vector<string>::const_iterator iter = ret.begin(); iter != ret.end(); ++iter)
        //copy((*iter).begin(), (*iter).end(), back_inserter(str));
        str.insert(str.end(), (*iter).begin(), (*iter).end());
    cout << endl << str << endl;
}