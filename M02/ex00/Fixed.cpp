#include "Fixed.hpp"

const int Fixed::_nBitFractional = 8;

//C&D

Fixed::Fixed() : _fPoint(0){
    cout << "Default constructor called" << ln;
}

Fixed::~Fixed(){
    cout << "Destructor called" << ln;
}

Fixed::Fixed(Fixed const &fixed){
    cout << "Copy constructor called" << ln;
    *this = fixed;
}

//copy assignment Operator Overload
Fixed & Fixed::operator= (Fixed const & fixed){
    cout << "Copy assignment operator called" << ln;
    this->_fPoint = fixed.getRawBits();
    return (*this);
}

//G&S

int Fixed::getRawBits(void) const {
    cout << "getRawBits member function called" << ln;
    return this->_fPoint;
}

void Fixed::setRawBits(int const raw){
    cout << "setRawBits member function called" << ln;
    this->_fPoint = raw;
}