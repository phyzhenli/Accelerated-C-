#include "accumulate.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<double> v = {1.1, 2.2, 3.2, 4.2};

    cout << accumulate(v.begin(), v.end(), 0) << endl;

    return 0;
}