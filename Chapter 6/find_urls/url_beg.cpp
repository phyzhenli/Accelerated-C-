#include "url_beg.h"
#include "not_url_char.h"
#include <algorithm>

using std::string;


string::const_iterator url_beg(string::const_iterator b, string::const_iterator e)
{
    static const string sep = "://";

    typedef string::const_iterator iter;

    //i标记了查找到的://的位置
    iter i = b;

    while ((i = search(i, e, sep.begin(), sep.end())) != e) {
        //确保://不是本行惟一一个符号
        if (i != b && i + sep.size() != e) {
            //beg标记开头
            iter beg = i;
            while (beg != b && isalpha(beg[-1]))  //http前后一般都会有空格，空格不是字母
                --beg;
            //在://后面至少有一个字符吗？
            if(beg != i && i + sep.size() != e && !not_url_char(i[sep.size()]))
                return beg;
        }
        //找到了://但不是url
        if (i != e)
            i += sep.size();
    }
    return e;
}