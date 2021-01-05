#include "remove_copy.h"
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<double> v = {0, 1, 2, 3};
    vector<double> ret;

    remove_copy(v.begin(), v.end(), back_inserter(ret), 1.0);

    for (vector<double>::const_iterator iter = ret.begin(); iter != ret.end(); iter++)
        cout << *iter << endl;

}