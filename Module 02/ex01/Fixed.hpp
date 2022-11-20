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
		Fixed &		operator=( Fixed const & rhs );
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int nValue;
		static const int fBits;

};

std::ostream &operator<<(std::ostream &output , Fixed const &i);

#endif /* *********************************************************** FIXED_H */