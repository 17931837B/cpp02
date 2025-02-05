#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	val;
		static const int	eight_val = 8;
	public:
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		~Fixed();
		Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed &src);
		int getRawBits(void)const;
		void setRawBits(int const raw);
		float	toFloat(void)const;
		int	toInt(void)const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif