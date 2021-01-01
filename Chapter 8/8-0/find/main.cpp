#include "find.h"
#include <string>
#include <iostream>

using namespace std;


int main()
{
    string s = "abcdefg";

    cout << _find(s.begin(), s.end(), 'e')[2] << endl;
}