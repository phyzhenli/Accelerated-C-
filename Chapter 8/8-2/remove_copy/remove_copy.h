#ifndef GUARD_remove_copy
#define GUARD_remove_copy

template <class In, class Out, class X>
void remove_copy(In begin, In end, Out dest, const X& x)
{
    while (begin != end) {
        if (*begin != x)
            *dest++ = *begin++;
        else
            begin++;
    }
}

#endif