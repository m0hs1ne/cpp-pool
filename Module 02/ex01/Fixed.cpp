#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = num << _fractionalBits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = (int)roundf(num * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std ::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixedPointValue = fixed.getRawBits();
    return *this;
}

float Fixed::toFloat(void) const
{
    return ((float)_fixedPointValue / (float(1 << _fractionalBits)));
}

int Fixed::toInt(void) const
{
    return (_fixedPointValue >> _fractionalBits);
}

int Fixed::getRawBits(void) const
{
    return(this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat();
    return out;
}