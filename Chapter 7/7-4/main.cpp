#include "xref.h"
#include "split.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::map;

int main()
{
    map<string, vector<int> > ret = xref(cin);

    for (map<string, vector<int> >::const_iterator iter = ret.begin(); iter != ret.end(); ++iter) {
        cout << iter->first << " occurs on line(s): ";

        vector<int>::const_iterator line = iter->second.begin();
        // cout << *line;

        // ++line;
        int i = 0;
        while (line != iter->second.end()) {
            cout << *line << " ";
            ++line;
            ++i;
            if (i == 35) {
                cout << endl;
                i = 0;
            }
        }

        cout << endl;
    }

    return 0;
}