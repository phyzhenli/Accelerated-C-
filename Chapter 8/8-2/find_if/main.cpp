#include "find_if.h"
#include <iostream>

using namespace std;

bool isx(char c)
{
    if (c == 'x')
        return true;
    else return false;
}


int main()
{
    string s = "123x123";

    cout << *find_if(s.begin(), s.end(), isx) << endl;

    return 0;
}