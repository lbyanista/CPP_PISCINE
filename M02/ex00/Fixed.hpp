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
    int _fPoint;
    static const int _nBitFractional;
public:

    Fixed(Fixed const &fixed);
    Fixed();
    ~Fixed();

    //copy assignment Operator Overload 
    void operator = (Fixed const &fixed);

    //G&S
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif // !FIXED_HPP