#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &f);
	Fixed & operator =(const Fixed &f);
	int getRawBits() const;
	void setRawBits(int const raw);
private: 
	int _fixedPointValue;
	static const int _fractionalBits;

}; 

#endif // !FIXED_HPP 
