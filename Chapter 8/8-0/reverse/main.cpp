#include "reverse.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s = "abcdefgh";

    reverse(s.begin(), s.end(), 0);

    cout << s << endl;

    return 0;
}