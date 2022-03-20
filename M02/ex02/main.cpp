#include "Fixed.hpp"

int main( void ) {

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    cout << a << ln;
    cout << ++a << ln;
    cout << a << ln;
    cout << a++ << ln;
    cout << a << ln;

    cout << b << ln;
    cout << Fixed::max( a, b ) << ln;
    
    return 0;
}