#include "Fixed.hpp"

class C1
{
    public:
        int nb;
};
class C2
{
    public:
        int nb;
};

std::ostream & operator << (std::ostream & outp, C2 const & c1)
{
    outp << "1337" << std::endl;
    return outp;
}

string operator + (C1 c1, C2 c2)
{
    cout << "welcome to new /\n";
    return "Oke";
}

int main( void ) {

    string s1, s2;
    s1 = "s1";
    s2 = "s2";
    C1 c1; C2 c2;

    cout << c2 << std::endl;
    cout << c1 + c2 << std::endl;
    cout << "efn\n";
    cout << 42.421875 << std::endl;
    // Fixed       a;
    // Fixed const b( 10 );
    // Fixed const c( 42.42f );
    // Fixed const d( b );

    // a = Fixed( 1234.4321f );

    // cout << "a is " << a << ln;
    // cout << "b is " << b << ln;
    // cout << "c is " << c << ln;
    // cout << "d is " << d << ln;

    // cout << "a is " << a.toInt() << " as integer" << ln;
    // cout << "b is " << b.toInt() << " as integer" << ln;
    // cout << "c is " << c.toInt() << " as integer" << ln;
	// cout << "d is " << d.toInt() << " as integer" << ln;


	return 0;
	}