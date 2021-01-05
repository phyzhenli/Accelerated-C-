#include "search.h"
#include <string>
#include <iostream>

using namespace std;


int main()
{
    string s = "abcdacdef";
    string str = "cdef";

    cout << *search(s.begin(), s.end(), str.begin(), str.end()) << endl;

    return 0;
}