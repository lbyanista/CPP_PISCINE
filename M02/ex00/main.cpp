#include "Fixed.hpp"
#include <float.h>

int main()
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    cout << a.GetRawBit() << ln;
    cout << b.GetRawBit() << ln;
    cout << c.GetRawBit() << ln;
    return 0;
}