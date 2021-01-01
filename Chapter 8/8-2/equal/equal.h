#ifndef GUARD_equal
#define GUARD_equal

template <class Bi>
bool equal(Bi begin, Bi end, Bi rbegin)
{
    while (begin < rbegin ) {
        if(*begin++ == *rbegin--);
        else return false ;
    }

    return true;
}






#endif