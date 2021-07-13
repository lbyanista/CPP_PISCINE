#include "whatever.hpp"

class Awesome
{
    private:
    public:
        int _n;
        Awesome(int n) : _n(n) {}
        bool operator==(Awesome const & rhs) const
        {
            return (_n == rhs._n);
        }
        bool operator!=(Awesome const & rhs) const
        {
            return (_n == rhs._n);
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
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << "-------------------------------" << std::endl;
    }
    {
        Awesome a(5);
        Awesome b(3);
        std::cout << "a = " << a._n << ", b = " << b._n << std::endl;
        ::swap<Awesome>(a, b);
        std::cout << "swap a and b; " "a = " << a._n << ", b = " << b._n << std::endl;
        std::cout << "min( a, b ) = " << ::min<Awesome>(a, b)._n << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b)._n << std::endl;

	    return 0;
    }
}
