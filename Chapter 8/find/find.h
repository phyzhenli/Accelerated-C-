#ifndef GUARD_find
#define GUARD_find

template <class In, class X>
In find(In begin, In end, const X& x)
{
    while (begin != end && *begin != x)
        ++begin;
    return begin;
}

template <class In, class X>
In _find(In begin, In end, const X& x)
{
    if (begin == end || *begin == x)
        return begin;
    begin++;
    return _find(begin, end, x);
}

#endif