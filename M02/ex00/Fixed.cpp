#include "Fixed.hpp"

const int Fixed::_nBitFractional = 8;

//C&D

Fixed::Fixed(){
    cout << "Default Constractor Called" << ln;
    this->_fixedPoint = 0;
}

Fixed::~Fixed(){
    cout << "Default Destractor called" << ln;
}

Fixed::Fixed(Fixed const &fixed){
    cout << "Copy Constractor Called" << ln;
    *this = fixed;
}

//Operator Overload
void Fixed::operator = (Fixed const &fixed){
    cout << "Assignation Opertator Called" << ln;
    this->_fixedPoint = fixed.GetRawBit();
}

//G&S

int Fixed::GetRawBit(void)const {
    cout << "GetRawBit member function Called" << ln;
    return this->_fixedPoint;
}

void Fixed::SetRawBit(int const raw){
    cout << "SetRawBit member Function Called" << ln;
    this->_fixedPoint = raw;
}