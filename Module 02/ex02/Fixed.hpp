	#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed( Fixed const & src );
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &		operator=( Fixed const & rhs );
		Fixed		operator+(Fixed const & rhs);
		Fixed		operator*(Fixed const & rhs);
		Fixed		operator-(Fixed const & rhs);
		Fixed		operator/(Fixed const & rhs);

		bool		operator>(Fixed const & rhs) const;
		bool		operator<(Fixed const & rhs) const;
		bool		operator>=(Fixed const & rhs) const;
		bool		operator<=(Fixed const & rhs) const;
		bool		operator==(Fixed const & rhs) const;
		bool		operator!=(Fixed const & rhs) const;

		Fixed &		operator++(void);
		Fixed &		operator--(void);
		Fixed		operator++(int);
		Fixed		operator--(int);
	private:
		int nValue;
		static const int fBits;

};

std::ostream &operator<<(std::ostream &output , Fixed const &i);

#endif /* *********************************************************** FIXED_H */