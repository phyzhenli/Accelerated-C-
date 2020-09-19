#include<iostream>
#include<ios>
#include<algorithm>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	cout << "Please enter numbers, separate by sapce or enter, ended by < Ctrl + D>." << endl;
	vector<int> numbers;
	vector<int> numbers_par1;
	vector<int> numbers_par2;
	vector<int> numbers_par3;
	vector<int> numbers_par4;

	double number;

	while (cin >> number)
		numbers.push_back(number);

	typedef vector<int>::size_type vec_sz;
	vec_sz size = numbers.size();

	if (size % 4 != 0) {
		cout << endl << "Error: 4 times." << endl;
		return 1;
	}
	
	sort(numbers.begin(), numbers.end());
	vec_sz mid_2 = size / 2;
	vec_sz mid_1 = mid_2 / 2;
	vec_sz mid_3 = mid_1 + mid_2;

	cout << endl <<endl << "Part 1: ";
	for (vec_sz i = mid_3; i!= size + 1; ++i)
		numbers_par1.push_back(numbers[i]);
		for (vec_sz j = 0; j != mid_1; ++j)
			cout << numbers_par1[j] << " ";
	
	cout << endl << endl << "Part 2: ";
	for (vec_sz i = mid_2; i != mid_3; ++i)
		numbers_par2.push_back(numbers[i]);
		for (vec_sz j = 0; j != mid_1; ++j)
			cout << numbers_par2[j] << " ";
	
	cout << endl << endl << "Part 3: ";
	for (vec_sz i = mid_1; i!=mid_2; ++i)
		numbers_par3.push_back(numbers[i]);
		for (vec_sz j = 0; j != mid_1; ++j)
			cout << numbers_par3[j] << " ";
	
	cout << endl << endl << "Part 4: ";
	for (vec_sz i = 0; i != mid_1; ++i)
		numbers_par4.push_back(numbers[i]);
		for ( vec_sz j = 0; j != mid_1; ++j )
			cout << numbers_par4[j] << " ";
	
	cout << endl;
	return 0;
}
