#include "xref.h"

using std::vector;
using std::map;
using std::string;
using std::istream;

map<string, vector<int> > xref(istream& in,
                               vector<string> find_words(const string&))
{
    string line;
    int line_number = 0;
    map<string, vector<int> > ret;

    while (getline(in, line)) {
        ++line_number;

        vector<string> words = find_words(line);

        // use map delete repeated words 
        map<string, int> words_map;
        for (vector<string>::const_iterator iter = words.begin(); iter != words.end(); ++iter)
            ++words_map[*iter];

        for (map<string, int>::const_iterator iter = words_map.begin(); iter != words_map.end(); ++iter)
            ret[iter->first].push_back(line_number);
    }
    return ret;
}