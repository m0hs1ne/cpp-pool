#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const int num)
{
    _fixedPointValue = num << _fractionalBits;
}

Fixed::Fixed(const float num)
{
    _fixedPointValue = (int)roundf(num * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
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

bool Fixed::operator>(Fixed const &fixed)
{
    return(this->_fixedPointValue > fixed.getRawBits());
}

bool Fixed::operator<(Fixed const &fixed)
{
    return(this->_fixedPointValue < fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const &fixed)
{
    return(this->_fixedPointValue >= fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const &fixed)
{
    return(this->_fixedPointValue <= fixed.getRawBits());
}

bool Fixed::operator==(Fixed const &fixed)
{
    return(this->_fixedPointValue == fixed.getRawBits());
}

bool Fixed::operator!=(Fixed const &fixed)
{
    return(this->_fixedPointValue != fixed.getRawBits());
}

Fixed Fixed::operator+(Fixed const &fixed)
{
    return(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(Fixed const &fixed)
{
    return(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(Fixed const &fixed)
{
    return(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(Fixed const &fixed)
{
    return(this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++(void)
{
    this->_fixedPointValue++;
    return *this;
}

Fixed &Fixed::operator--(void)
{
    this->_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed res(*this);
    this->_fixedPointValue++;
    return (res);
}

Fixed Fixed::operator--(int)
{
    Fixed res(*this);
    this->_fixedPointValue--;
    return (res);
}

Fixed const &Fixed::min(Fixed const &v1, Fixed const &v2)
{
    if (v1.getRawBits() < v2.getRawBits())
        return (v1);
    return (v2);
}

Fixed const &Fixed::max(Fixed const &v1, Fixed const &v2)
{
    if (v1.getRawBits() > v2.getRawBits())
        return (v1);
    return (v2);
}

Fixed &Fixed::min(Fixed &v1, Fixed &v2)
{
    if (v1.getRawBits() < v2.getRawBits())
        return (v1);
    return (v2);
}

Fixed &Fixed::max(Fixed &v1, Fixed &v2)
{
    if (v1.getRawBits() > v2.getRawBits())
        return (v1);
    return (v2);
}