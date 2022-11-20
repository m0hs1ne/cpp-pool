#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();
		Fixed &		operator=( Fixed const & rhs );
		int getRawBits(void);
		void setRawBits(int const raw);

	private:
		int nValue;
		static const int fBits;

};


#endif /* *********************************************************** FIXED_H */