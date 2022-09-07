#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;
public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed &fixed);
    ~Fixed();
    Fixed& operator=(const Fixed &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};


#endif