#include "whatever.hpp"

class Awesome
{
    public:
        int _n;
        Awesome(int n) : _n(n) {}
        bool operator==(Awesome const & rhs) const
        {
            return (_n == rhs._n);
        }
        bool operator!=(Awesome const & rhs) const
        {
            return (_n != rhs._n);
        }
        bool operator>=(Awesome const & rhs) const
        {
            return (_n >= rhs._n);
        }
        bool operator<=(Awesome const & rhs) const
        {
            return (_n <= rhs._n);
        }
        bool operator>(Awesome const & rhs) const
        {
            return (_n > rhs._n);
        }
        bool operator<(Awesome const & rhs) const
        {
            return (_n < rhs._n);
        }
};

int main( void ) 
{
    {
	int a = 2;
	int b = 3;
	cout << "a = " << a << ", b = " << b << ln;
	::swap(a, b);
    cout << "a = " << a << ", b = " << b << ln;
	cout << "min( a, b ) = " << ::min( a, b ) << ln;
	cout << "max( a, b ) = " << ::max( a, b ) << ln;
	string c = "chaine1";
	string d = "chaine2";
	cout << "c = " << c << ", d = " << d << ln;
	::swap(c, d);
	cout << "c = " << c << ", d = " << d << ln;
	cout << "min( c, d ) = " << ::min( c, d ) << ln;
	cout << "max( c, d ) = " << ::max( c, d ) << ln;

    cout << "-------------------------------" << ln;
    }
    {
        Awesome a(5);
        Awesome b(3);
        cout << "a = " << a._n << ", b = " << b._n << ln;
        ::swap<Awesome>(a, b);
        cout << "swap a and b; " "a = " << a._n << ", b = " << b._n << ln;
        cout << "min( a, b ) = " << ::min(a, b)._n << ln;
        cout << "max( a, b ) = " << ::max(a, b)._n << ln;

	    return 0;
    }
}
