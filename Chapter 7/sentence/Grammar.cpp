#include "Grammar.h"
#include "split.h"

using std::vector;
using std::string;
using std::istream;
using std::map;


Grammar read_grammar(istream& in)
{
    Grammar ret;
    string line;

    while (getline(in, line)) {
        vector<string> entry = split(line);

        if (!entry.empty())
            ret[entry[0]].push_back(
                Rule(entry.begin() + 1, entry.end())
            );
    }
    return ret;
}