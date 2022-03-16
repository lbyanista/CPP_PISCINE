#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#define cout std::cout
#define ln std::endl
#define string std::string

class Fixed
{
private:
    /* data */
    int _fixedPoint;
    static const int _nBitFractional;
public:

    Fixed();
    ~Fixed();
    Fixed(Fixed const &fixed);

    //Operator Overload 
    void operator = (Fixed const &fixed);

    //G&S
    int     GetRawBit(void) const;
    void    SetRawBit(int const raw);
};

Fixed::Fixed()
{
}

Fixed::~Fixed()
{
}


#endif // !FIXED_HPP