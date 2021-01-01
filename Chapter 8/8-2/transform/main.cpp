#include "transform.h"
#include <vector>
#include <iostream>

using namespace std;

int f(int i)
{
    return ++i;
}

int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> ret;
    transform(v.begin(), v.end(), back_inserter(ret), f);

    for (vector<int>::const_iterator iter = ret.begin(); iter != ret.end(); iter++)
        cout << *iter << endl;

    return 0;
}