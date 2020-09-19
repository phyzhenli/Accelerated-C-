#include<iostream>
//#include<ios> 用于precision，不再需要了
#include<iomanip>
#include<string>
#include<algorithm>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::streamsize;
using std::string;
using std::vector;
//using std::precision; 不再需要了

int main()
{
	cout << "Please enter your name:" << endl;
	string name;
	cin >> name;
	cout << endl << "Hello, " + name + "." << endl;
	
	//输入期中和期末成绩，用空格或回车隔开，以ctrl+D结束
	cout << "Please enter your midterm and final exam grades, separate by space or enter:" << endl;
	double midterm, final;
	cin >> midterm >> final;
	cout << "midterm: " << midterm << endl << "final: " << final << endl;
	
	//输入作业，用空格或回车隔开，以ctrl+D结束	
	cout << endl << "Please enter your homework grades, separate by space or enter, ended by < Ctrl + D >:"<< endl;
	
	int count = 0;
	double sum = 0;
	vector<double> homework;
	double x;

	while ( cin >> x ) {
		++count;
		cout << "current homework grade: " << x <<endl;
		sum += x;
		homework.push_back(x);
	}
	
	
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	cout << endl << "size: " << size << endl;

	if (size == 0) {
		cout << endl << "Error: no homework grade found." << endl;
		return 1;
	}
	
	sort(homework.begin(), homework.end());

	vec_sz mid = size/2;
	double median;
	median = (size % 2 == 0) ? (homework[mid] + homework[mid-1]) / 2 : homework[mid];

	streamsize prec = cout.precision();
	
	cout << endl << setprecision(3) << "Homework average is: "
	     << sum / count << setprecision(prec);

	cout << endl << "Your grade1 is :" << setprecision(3)
	     << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
	     << setprecision(prec) << endl;
	
	cout << endl << setprecision(3) << "Homework median is: "
	     << median << setprecision(prec);

	cout << endl << "Your grade2 is: " << setprecision(3)
	     << 0.2 * midterm + 0.4 * final + 0.4 * median
	     << setprecision(prec) << endl;

	return 0;

}
