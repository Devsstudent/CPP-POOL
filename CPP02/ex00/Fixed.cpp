#include "Fixed.hpp"

const int	Fixed::fractional = 8;

Fixed::Fixed(): fixed_point_int(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Desctructor called" << std::endl;
}

Fixed::Fixed(Fixed &a)
{
	fixed_point_int = a.getRawBits();
	std::cout << "Copy Constructor called" << std::endl;
}

Fixed &Fixed ::operator = (const Fixed& a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point_int = a.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_int);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_int = raw;
}
