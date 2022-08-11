#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
	return;
} 

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return;
} 

Fixed::Fixed(const Fixed &f){
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
	return;
} 

Fixed & Fixed::operator =(const Fixed &f){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = f.getRawBits();
	return *this;
} 

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
	return;
}

int const Fixed::_fractionalBits = 8;
