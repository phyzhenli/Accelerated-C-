#include "read.h"
#include "average.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::domain_error;

int main()
{
	vector<double> numbers;
	cout << endl << "Please enter numbers, separate by space or enter, ended by <Ctrl +D>." << endl;

	read(cin, numbers);

	try {
		double  ave = average(numbers);
		cout << endl << "The average is: " << ave << endl;
	}
	catch (domain_error e) {
		e.what();
	}
	
	return 0;
}
