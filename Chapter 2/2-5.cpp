#include<iostream>
#include<string>

using std::cin ;
using std::cout ;
using std::string ;
using std::endl ;

//正方形
/*
int main()
{ 
	cout << "Enter rows:" << endl ; 
	int rows ;
	cin >> rows ;
	const string stars( rows , '*' ) ;

	for ( int r = 0 ; r != rows ; ++r ) {
		cout << stars << endl ;
	}
	cout << endl ;
	return 0 ;
}
*/

/*
//长方形
int main()
{
	cout << "Enter rows:" << endl ; 
	int rows ;
	cin >> rows ;
	
	cout << "Enter cols:" << endl ;
	int cols ;
	cin >> cols; 

	const string stars( cols , '*' ) ;

	for ( int r = 0 ; r != rows ; ++r ) {
		cout << stars << endl ;
	}
	cout << endl ;
	return 0 ;
}
*/

/*
//左直角三角形
int main()
{
	cout << "Enter rows:" << endl ;
	int rows ;
	cin >> rows ;

	//cout << "Enter cols:" << endl ;
	//int cols ;
	//cin >> cols ;

	for ( int r = 0 ; r != rows ; ++r ) {
		const string stars ( r+1 , '*') ;
		cout << stars ;
		cout << endl ;
	}

	return 0 ;
}
*/

/*
//右直角三角形
int main ()
{
	cout << "Enter rows:" << endl ;
	int rows ;
	cin >> rows ;

	for ( int r = 0 ; r !=rows ; ++r ) {
		const string spaces( rows - r - 1 , ' ' ) ;
		const string stars ( r + 1 , '*' ) ;
		const string space_stars = spaces + stars ;

		cout << space_stars ;
		cout << endl ;
	}

	return 0 ;
}
*/

//中间三角形
int main ()
{
	cout << "Enter rows:" << endl ;
	int rows ;
	cin >> rows ;

	if ( rows <= 2 )
		cout << "Error: Rows must more than 2." << endl ;
	else if ( rows % 2 == 0 )
		for ( int r = 0 ; r != rows/2 ; ++r ) {
			const string spaces ( rows/2 - r , ' ' ) ;
			const string stars ( 2*r + 1 , '*' ) ;
			const string spaces_stars = spaces + stars ;
			cout << spaces_stars << endl ;
		}
	     else
		     for ( int r = 0 ; r != (rows+1)/2 ; ++r ) {
			 const string spaces ( (rows + 1)/2 - r , ' ' ) ;
			 const string stars ( 2*r + 1 , '*' ) ;
			 const string spaces_stars = spaces + stars ;

			 cout << spaces_stars << endl ;
		     }

	return 0 ;
}
