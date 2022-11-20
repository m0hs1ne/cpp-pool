#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/

Fixed::Fixed()
{
	this->nValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->nValue = num << this->fBits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->nValue = (int)roundf(num *(1 << fBits));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOADS ---------------------------------
*/

Fixed &Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->nValue = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &output , Fixed const &i)
{
	output << i.toFloat();
	return output;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::toInt() const 
{
	return this->nValue >> fBits;
}

float Fixed::toFloat() const {
	return (float)this->nValue / (float)(1 << this->fBits);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->nValue;
}

void Fixed::setRawBits(int const raw)
{
	this->nValue = raw;
}

const int Fixed::fBits = 8;
/* ************************************************************************** */