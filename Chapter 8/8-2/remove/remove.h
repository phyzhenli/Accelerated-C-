#ifndef GUARD_remove
#define GUARD_remove

template <class For, class X>
For remove(For begin, For end, const X& x)
{
    For i = begin;
    while (begin != end) {
        if (*begin != x)
            *i++ = *begin;
        begin++;
    }

    return i;

}




#endif