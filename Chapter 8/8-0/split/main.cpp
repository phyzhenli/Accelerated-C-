#include "split.h"
#include <iterator>
#include <iostream>

using namespace std;

int main()
{
    string s;
    while (getline(cin ,s))
        split(s, ostream_iterator<string>(cout, "\n"));
    return 0;
}