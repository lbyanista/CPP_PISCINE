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

    bool operator > (Fixed const &fixed);
    bool operator < (Fixed const &fixed);
    bool operator >= (Fixed const &fixed);
    bool operator <= (Fixed const &fixed);
    bool operator == (Fixed const &fixed);
    bool operator != (Fixed const &fixed);

    Fixed &operator+(Fixed const &fixed);
    Fixed &operator-(Fixed const &fixed);
    Fixed &operator*(Fixed const &fixed);
    Fixed &operator/(Fixed const &fixed);

    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed operator--(int);

    const Fixed &min(const Fixed &lfixed, const Fixed &rfixed);

    int getRawBits(void)const;
    void setRawBits(int const raw);
    float toFloat(void)const;
    int toInt(void)const;
};
    std::ostream & operator<<(std::ostream & o , const Fixed & fixed);
#endif
