#include "median.h"
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> v = {4, 5, 2, 1, 3};

    cout << median(v) << endl;

    return 0;
}