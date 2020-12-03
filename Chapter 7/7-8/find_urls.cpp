#include "find_urls.h"
#include "url_beg.h"
#include "url_end.h"

using std::vector;
using std::string;

vector<string> find_urls(const string& s)
{
    vector<string> ret;
    typedef string::const_iterator iter;
    iter b = s.begin(), e = s.end();

    while (b != e) {
        b = url_beg(b, e);

        if(b != e) {
            iter after = url_end(b, e);
            ret.push_back(string(b, after));
            b = after;
        }
    }
    return ret;
}