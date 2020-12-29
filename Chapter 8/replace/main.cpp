#include "replace.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s = "abcdefff";

    replace(s.begin(), s.end(), 'f', '1');

    cout << s << endl;
    return 0;
}