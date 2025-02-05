#include "Fixed.hpp"

Fixed::Fixed(): val(0)
{
	std::cout << "Default Constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignation operator called\n";
	if (this != &src)
		this->val = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called\n";
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->val = raw;
}