#include "equal.h"
#include <string>
#include <iostream>

using namespace std;


int main()
{
    string s = "abcddcbaa";


    if(equal(s.begin(), s.end(), s.rbegin()))
        cout << "TRUE" << endl;
    else
        cout << "FLASE" << endl; 
}