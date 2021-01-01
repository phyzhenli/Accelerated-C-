#include "remove_copy_if.h"
#include <string>
#include <iostream>

using namespace std;



int main()
{
    string s = "abccccdef";
    string dest;
    remove_copy_if(s.begin(), s.end(), back_inserter(dest), f);

    cout << dest << endl;
    
}