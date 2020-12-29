#ifndef GUARD_copy
#define GUARD_copy

template <class In, class Out>
Out copy(In begin, In end, Out dest, int i)
{
    while (begin != end)
        *dest++ = *begin++;
    return dest;
}

#endif