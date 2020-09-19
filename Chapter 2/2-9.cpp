#include<iostream>
#include<string>

using std::string ;
using std::endl ;
using std::cout ;
using std::cin ;

int main()
{
	cout << "Please Enter the First Number:" << endl ;
	long int a ;
	cin >> a ;

	cout << "Please Enter the Second Number:" << endl ;
	long int b ;
	cin >> b ;

	cout << endl ;

	if ( a == b )
		cout << "Same." << endl ;
	else a > b ? cout << " First Large." << endl : cout << "Second Large." << endl ;
	
	return 0;	
}
