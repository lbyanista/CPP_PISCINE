#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#define string std::string
#define ln std::endl
#define cout std::cout

class Fixed
{
private:
    /* data */
public:
    Fixed(const int i);
    Fixed(const float fi);
    ~Fixed();
    float toFloat(void)const;
    int toInt(void)const;
};

Fixed::Fixed(const int i)
{
}

Fixed::~Fixed()
{
}


#endif
