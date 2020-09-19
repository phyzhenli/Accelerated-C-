#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	cout << "Please enter words, separate by space or enter, ended by <Ctrl + D>." << endl;
	vector<string> words;
	typedef vector<string>::size_type vec_sz;
	vector<vec_sz> words_size;
	
	string word;
	while (cin >> word)
		words.push_back(word);
	
	vec_sz size = words.size();
	for (vec_sz i = 0; i != size; i++)  //范围不对很可能会出现核心已转储
		words_size.push_back(words[i].size());

	sort(words_size.begin(), words_size.end());

	cout << endl << "Max length: " << words_size[size-1]
	     << endl << "Min length: " << words_size[0]
	     << endl;

	return 0;
}
