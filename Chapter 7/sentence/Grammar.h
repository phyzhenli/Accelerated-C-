#ifndef GUARD_Grammer
#define GUARD_Grammer

#include <vector>
#include <string>
#include <iostream>
#include <map>


typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string, Rule_collection> Grammar;

Grammar read_grammar(std::istream&);

#endif