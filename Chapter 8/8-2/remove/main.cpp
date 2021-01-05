#include "remove.h"
#include <iostream>

using namespace std;

int main()
{
    string s = "abccccd";

    s.erase(remove(s.begin(), s.end(), 'd'), s.end());

    for (string::const_iterator iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << endl;

}