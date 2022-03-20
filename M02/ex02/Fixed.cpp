#include "Fixed.hpp"

const int Fixed::_nBitFract = 8;

Fixed::Fixed() :_fpoint(0){
    cout << "Default constructor called" << ln;
    // this->_fpoint = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    cout << "Copy constructor called" << ln;
    *this = fixed;
}

Fixed::Fixed(const int i){
    cout << "Int constructor called" << ln;
    this->_fpoint = i * (1 << _nBitFract);
}

//1 << 8 = 2^8

Fixed::Fixed(const float fi){
    cout << "Float constructor called" << ln;
    this->_fpoint = roundf(fi * (1 << _nBitFract));
}

float Fixed::toFloat(void)const{
  return ((float)this->_fpoint / (float)(1 << _nBitFract));
}

int Fixed::toInt()const{
    return (this->_fpoint / (1 << _nBitFract));
}

int Fixed::getRawBits(void)const{
    cout << "getRawBits member function called" << ln;
    return this->_fpoint;
}

// void Fixed::setRawBits(int const raw){
//     cout << "setRawBits member function called" << ln;
//     this->_fpoint = raw;
// }

Fixed & Fixed::operator=(Fixed const &fixed){
    cout << "Copy assignment operator called" << ln;
    this->_fpoint = fixed._fpoint;
    return (*this);
}

//------------- comparison operators

bool Fixed::operator>(Fixed const &fixed){
    cout << "Copy assignment operator > called" << ln;
    return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(Fixed const &fixed){
    cout << "Copy assignment operator < called" << ln;
    return (*this < fixed);
}

bool Fixed::operator>=(Fixed const &fixed){
    cout << "Copy assignment operator >= called" << ln;
    return (*this > fixed);
}

bool Fixed::operator<=(Fixed const &fixed){
    cout << "Copy assignment operator <= called" << ln;
    return (*this < fixed);
}

bool Fixed::operator==(Fixed const &fixed){
    cout << "Copy assignment operator == called" << ln;
    return (this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed){
    cout << "Copy assignment operator != called" << ln;
    return (!(*this == fixed));
}

// ---- arithmetic operators

Fixed & Fixed::operator+(Fixed const &fixed){
    Fixed	res;

	res.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (res);
}

Fixed & Fixed::operator-(Fixed const &fixed){
    Fixed	res;

	res.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (res);
}

Fixed & Fixed::operator*(Fixed const &fixed){
    Fixed	res(this->toFloat() * fixed.toFloat());
	return (res);
}

Fixed & Fixed::operator/(Fixed const &fixed){
    Fixed	res(this->toFloat() / fixed.toFloat());
	return (res);
}

//++ --

Fixed	&Fixed::operator++( void )
{
	this->_fpoint++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

Fixed	&Fixed::operator--( void )
{
	this->_fpoint--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	old(*this);

	--(*this);
	return (old);
}

//----------

// Min && max

const Fixed		&Fixed::min( const Fixed &lfixed, const Fixed &rfixed )
{
	if (lfixed < rfixed)
		return (lfixed);
	else
		return (rfixed);
}

const Fixed		&Fixed::max( const Fixed &lhs, const Fixed &rhs )
{
	if (lhs > rhs)
		return (lhs);
	else
		

//--------
// --- Overloading << operation --- //
std::ostream & operator<<(std::ostream & o , const Fixed & fixed)
{
    o << fixed.toFloat();
    return (o);
}

Fixed::~Fixed(){
    cout << "Destructor called" << ln;
}