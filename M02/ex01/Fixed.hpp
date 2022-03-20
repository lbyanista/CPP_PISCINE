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
    static const int _nBitFract;
    int _fpoint;
public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int i);
    Fixed(const float fi);
    ~Fixed();
    Fixed &operator = (Fixed const &fixed);
    int getRawBits(void)const;
    void setRawBits(int const raw);
    float toFloat(void)const;
    int toInt(void)const;
};
    std::ostream & operator<<(std::ostream & os , const Fixed & fixed);
#endif
