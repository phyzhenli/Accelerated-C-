#ifndef GUARD_find_if
#define GUARD_find_if


template <class In, class Func>
In find_if(In begin, In end, Func p)
{
    while (begin != end) {
        if (p(*begin))
            return begin;
        else begin++;
    }
    
    return begin;
}






#endif