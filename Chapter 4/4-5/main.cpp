#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <stdexcept>
#include "read.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::vector;
using std::domain_error;

int main()
{
	vector<string> words;
	cout << endl << "Please enter words, separate by space or enter, ended by <Ctrl +D>." << endl;
	read(cin, words);
	typedef vector<string>::size_type vec_sz;
	vec_sz	size = words.size();

	try {
		if (size == 0)
			throw domain_error("Error: no word!");
		for (vec_sz i = 0; i != size; ++i) {
			bool flag = false;
			vec_sz count = 0;
			if (i == 0) {
				for (vec_sz j = 0; j != size; ++j)
					if(words[i] == words[j])
						count++;
				cout << endl << words[i] << ": " << count << endl;
			}
			else {
				for (vec_sz c = 0; c != i; c++)
					if (words[i] == words[c])
						flag = true;
				if (flag);
				else {
					for (vec_sz j = 0; j != size; j++)
					if (words[i] == words[j])
						count ++;
					cout << endl << words[i] << ": " << count << endl;
				}
			}
		}
	} catch (domain_error e) {
		cout << e.what() << endl;
	}
	
	return 0;
}
