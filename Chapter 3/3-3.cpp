#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	cout << "Please enter words, separate by space or enter, ended by <Ctrl +D>." << endl;
	
	vector<string> words;

	string word;
	while (cin >> word)
		words.push_back(word);

	typedef vector<string>::size_type vec_sz;
	vec_sz size = words.size();
	cout << endl << "size: " << size << endl << endl;

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
	return 0;
}
