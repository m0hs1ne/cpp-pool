#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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

    bool operator>(Fixed const &fixed);
    bool operator<(Fixed const &fixed);
    bool operator>=(Fixed const &fixed);
    bool operator<=(Fixed const &fixed);
    bool operator==(Fixed const &fixed);
    bool operator!=(Fixed const &fixed);

    Fixed operator+(Fixed const &fixed);
    Fixed operator-(Fixed const &fixed);
    Fixed operator*(Fixed const &fixed);
    Fixed operator/(Fixed const &fixed);

    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    static const Fixed &min(Fixed const &v1, Fixed const &v2);
    static Fixed &min(Fixed &v1, Fixed &v2);
    static const Fixed &max(Fixed const &v1, Fixed const &v2);
    static Fixed &max(Fixed &v1, Fixed &v2);

};
std::ostream &operator<<(std::ostream &out, Fixed const &fixed);
#endif