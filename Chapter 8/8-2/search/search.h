#ifndef GUARD_search
#define GUARD_search

#include <stdexcept>

template <class In>
In search(In begin, In end, In b, In e)
{
    if (begin == end || b == e)
        throw std::domain_error("nothing");
    else {

        while (begin != end) {
            if (*begin == *b) {

                In i = begin;
                In b_ = b;

                while (*begin == *b_) {
                    begin++;
                    b_++;
                    if (b_ == e && begin == end)
                        return i;
                    else
                        if (begin == end)
                            return end;
                        else
                            if (b_ == e)
                                return i;
                }
            
            }
            else
                begin++;
        }
        return end;
    }
}









#endif