#ifndef GUARD_transform
#define GUARD_transform

template <class In, class Out, class Function>
void transform(In begin, In end, Out dest, Function f)
{
    while (begin != end) {
        *dest++ = f(*begin++);
    }
}





#endif