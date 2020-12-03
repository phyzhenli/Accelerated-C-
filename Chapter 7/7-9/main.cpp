#include <iostream>
#include "nrand.h"


using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i != 20; i++) {
        int r = nrand(n);
    
        cout << endl << r << endl;

    }
    cout << endl << RAND_MAX << endl;
    return 0;
}