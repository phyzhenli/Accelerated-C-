#include "square.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::setw;

int main()
{
	cout << "Please enter your min number:" << endl;
	int min;
	cin >> min;
	cout << "Please enter your max number:" << endl;
	int max;
	cin >> max;

	//判断max是几位数
	int count = 0;
	int max_b = max;
	while (max_b != 0) {
		max_b /= 10;
		++count;
	}

	for (int i = min; i <= max; ++i) {
		cout << setw(count) << i << "  " << square(i) << endl;
	}

	return 0;
}
