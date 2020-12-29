#include "copy.h"
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> ret;

    copy(v.begin(), v.end(), back_inserter(ret), 0);


    for (vector<int>::const_iterator iter = ret.begin(); iter != ret.end(); iter++)
        printf("%d\n", *iter);

    return 0;
}