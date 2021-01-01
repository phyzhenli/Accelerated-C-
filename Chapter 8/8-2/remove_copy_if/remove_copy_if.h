#ifndef GUARD_remove_copy_if
#define GUARD_remove_copy_if

#include <iostream>

template <class In, class Out, class Function>
void remove_copy_if(In begin, In end, Out dest, Function f)
{
    while (begin != end) {
        if (!f(*begin))
            *dest++ = *begin++;
        else
            begin++;
    }
}


inline bool f(char c)
{
    if(c == 'c')
        return true;
    else
        return false;
}

#endif