#ifndef GUARD_xref
#define GUARD_xref

#include "split.h"
#include <map>
#include <istream>

std::map<std::string, std::vector<int> > xref(std::istream&, 
                                              std::vector<std::string> (const std::string&) = split);

#endif