#include<string>
#include<iostream>

using std::cin ; 
using std::cout ;
using std::endl ; 
using std::string ;

int main()
{
	cout << "Please enter your name:" << endl ;
	string name ;
	cin >> name ;
	const string greeting = "Hello," + name + "!" ;

	const int pad = 1 ;
	//cout << "Please enter pad:" << endl ;
	//cin >> pad ;

	const int rows = pad * 2 + 3 ;
	
	const string::size_type cols = greeting.size() + pad * 2 + 2 ;

	cout << endl ;

	//不变式，截至判断，已经输出了r行
	for ( int r = 0 ; r != rows ; ++r ) {
		string::size_type c = 0 ;

		while ( c != cols ) {
			if ( r == pad + 1 && c == pad + 1) {  //const int和c比较不会报waring，int会报warning
				cout << greeting ;
				c += greeting.size() ;
			} else {
				if ( r == 0 || r == rows - 1 || c == 0 || c == cols - 1 )
					cout << "*" ;
				else
					cout << " " ;
				++c ;
			}
		}
		cout << endl ;
	}
	
	return 0 ;

}
