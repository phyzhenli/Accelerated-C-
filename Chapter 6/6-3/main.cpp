#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using std::vector;
using std::string;
using std::copy;
using std::cout;
using std::endl;

int main()
{
    vector<int> u(10, 100);
    vector<int> v;

    copy(u.begin(), u.end(), back_inserter(v));  //P107 错误

    for (vector<int>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << endl << *iter << endl;

    return 0;
}