#include "find_urls.h"
#include "split.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
    cout << "Input: <Ctrl + D> ended" << endl;

    string s;
    vector<string> ret;
    while (getline(cin, s)) {
        vector<string> v = split(s);
        ret.insert(ret.end(), v.begin(), v.end());
    }

    vector<string> vec;
    for (vector<string>::const_iterator iter = ret.begin(); iter != ret.end(); ++iter) {
        vector<string> url = find_urls(*iter);
        vec.insert(vec.end(), url.begin(), url.end());
    }

    for (vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
        cout << endl << *iter << endl;

    return 0;

}