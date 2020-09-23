#include "read.h"

using std::istream;
using std::vector;
using std::string;

istream& read(istream& in, vector<string>& words)
{
	if (in) {
		words.clear();

		string word;
		while (in >> word)
			words.push_back(word);
		in.clear();
	}
	return in;

}
