#include "Fixed.hpp"

const int	Fixed::fractional = 8;

Fixed::Fixed(const float number)
{
	setRawBits(roundf(number * (1 << fractional)));
}

Fixed::Fixed(const int number)
{
	fixed_point_int = (int)number << fractional;
}

Fixed::Fixed(): fixed_point_int(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Desctructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
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

float	Fixed::toFloat(void) const
{
	//std::cout << getRawBits() << std::endl;
	return (float) (fixed_point_int) / (1 << fractional);
}

int	Fixed::toInt(void) const
{
	return ((int) (round(getRawBits() >> fractional)));
}

std::ostream& operator << (std::ostream& os,const Fixed& val)
{
	os << val.toFloat();
	return (os);
}
