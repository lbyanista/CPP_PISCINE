#include "Fixed.hpp"

const int Fixed::_nBitFractional = 8;

//C&D

Fixed::Fixed(){
    cout << "Default Constractor Called" << ln;
    this->_fPoint = 0;
}

Fixed::~Fixed(){
    cout << "Default Destractor called" << ln;
}

Fixed::Fixed(Fixed const &fixed){
    cout << "Copy Constractor Called" << ln;
    *this = fixed;
}

//copy assignment Operator Overload
void Fixed::operator= (Fixed const &fixed){
    cout << "Assignation Opertator Called" << ln;
    this->_fPoint = fixed.getRawBits();
}

//G&S

int Fixed::getRawBits(void) const {
    cout << "getRawBits member function Called" << ln;
    return this->_fPoint;
}

void Fixed::setRawBits(int const raw){
    cout << "setRawBits member Function Called" << ln;
    this->_fPoint = raw;
}