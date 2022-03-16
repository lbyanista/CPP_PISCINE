#include "Fixed.hpp"
#include <float.h>

int main()
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    cout << a.getRawBits() << ln;
    cout << b.getRawBits() << ln;
    cout << c.getRawBits() << ln;
    return 0;
}