#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
using std::vector;

int main()
{
    map<string, int> counter;
    string s;

    map<int, vector<string>> words;

    while (cin >> s)
        ++counter[s];

    for (map<string, int>::const_iterator iter = counter.begin(); iter != counter.end(); ++iter)
        words[iter->second].push_back(iter->first);

    for (map<int, vector<string>>::const_iterator iter = words.begin(); iter != words.end(); ++iter){
        cout << endl << iter->first << "\t" ;
        
        vector<string>::const_iterator it = iter->second.begin();
        cout << *it;

        ++it;
        while (it != iter->second.end()) {
            cout << " " << *it;
            ++it;
        }
        cout << endl;
    }

    return 0;
}