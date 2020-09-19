#include<iostream>
#include<string>

using std::cout ;
using std::cin ;
using std::endl ;
using std::string ;

int main()
{
	for( int i = 1 ; i <10 ; ++i )
		for ( int j = 1 ; j < 10 ; ++j )
			cout << j * i << endl ;
	return 0;

}
