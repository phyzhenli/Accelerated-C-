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

        if (iter->second.size() == 1) {
            cout << iter->first << " occurs on line: ";

            vector<int>::const_iterator line = iter->second.begin();
            cout << *line;

            ++line;
            while (line != iter->second.end()) {
                cout << "," << *line;
                ++line;
            }

            cout << endl;
        }
        else {

            cout << iter->first << " occurs on lines: ";

            vector<int>::const_iterator line = iter->second.begin();
            cout << *line;

            ++line;
            while (line != iter->second.end()) {
                cout << "," << *line;
                ++line;
            }

            cout << endl;
        }

    }

    return 0;
}