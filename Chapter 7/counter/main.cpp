#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;

int main()
{
    map<string, int> counter;
    string s;

    while (cin >> s)
        ++counter[s];

    for (map<string, int>::const_iterator iter = counter.begin(); iter != counter.end(); ++iter)
        cout << endl << iter->first << "\t" << iter->second << endl;

    return 0;
}