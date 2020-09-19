#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{
	bool done = false;
	vector<string> names;
	vector<double> grade;

	while (done != true) {
		cout << "Please enter name: " << endl;
		string name;
		cin >> name;
		names.push_back(name);
		cout << endl << "Hello, " << name << "." << endl;

		cout << endl << "Please enter your midterm and final exam grades, separate by space or enter:" << endl;
		double midterm, final;
		cin >> midterm >> final;
		cout << endl << "midterm: " << midterm << endl << "final: " << final << endl;
		
		cout << endl << "Please enter your two homework grades, separate by space or enter:"<< endl;
		double x, y;
		double sum;
		cin >> x >> y;
		sum = x + y;

		grade.push_back(0.2 * midterm + 0.4 * final + 0.4 * sum / 2);
		
		cout << endl << "More? Y/N: " << endl;
		string s;
		cin >> s;
		if (s == "Y")
			done = false;
		else
			done = true;
		cout << endl;
	}

	streamsize prec = cout.precision();
	typedef vector<string>::size_type vec_sz;
	vec_sz size = names.size();

	for (vec_sz i = 0; i != size; i++)
		cout << setprecision(3) << names[i] << " grade: " << grade[i]
		     << setprecision(prec) << endl;
	
	return 0;
}
