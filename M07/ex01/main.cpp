#include "iter.hpp"

class Awesome {
    private:
        int _n;
    public:
        Awesome( void ) : _n( 1337 ) { return; }
        int get( void ) const { return this->_n; }
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ){
    o << rhs.get();
    return o;
}

int main()
{
    int tab[] = {0,1,2,3,4};
    Awesome tab2[6];
    iter(tab, 5, print);
    iter(tab2, 5, print);
    return (0);
}