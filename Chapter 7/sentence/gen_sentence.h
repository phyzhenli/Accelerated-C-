#ifndef GUARD_gen_sentence
#define GUARD_gen_sentence

#include "Grammar.h"

std::vector<std::string> gen_sentence(const Grammar&);
bool bracketed(const std::string&);
void gen_aux(const Grammar&, const std::string&, std::vector<std::string>& ret);


#endif