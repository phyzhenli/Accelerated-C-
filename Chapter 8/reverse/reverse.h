#ifndef GUARD_reverse
#define GUARD_reverse

#include <algorithm>

template <class Bi>
void reverse(Bi begin, Bi end, int i)
{
    while (begin != end) {
        --end;
        if (begin != end)
            std::swap(*begin++, *end);
    }
}

#endif