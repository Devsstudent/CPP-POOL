#include "Fixed.hpp"

const int	Fixed::fractional = 8;

Fixed::Fixed(const float number)
{
	std::cout << "float" << std::endl;
	fixed_point_int = roundf(number * (1 << fractional));
}

Fixed::Fixed(const int number)
{
	std::cout << "int" << std::endl;
	fixed_point_int = (int) number << fractional;
}

Fixed::Fixed(): fixed_point_int(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Desctructor called" << std::endl;
}

Fixed::Fixed(Fixed const &a)
{
	fixed_point_int = a.getRawBits();
//	std::cout << "Copy Constructor called" << std::endl;
}

Fixed &Fixed ::operator = (const Fixed& a)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point_int = a.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_int);
}

void	Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	fixed_point_int = raw;
}

float	Fixed::toFloat(void) const
{
	//std::cout << getRawBits() << std::endl;
	return (float) (getRawBits()) / (1 << fractional);
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

bool	Fixed::operator > (const Fixed& a) const
{
	return (this->getRawBits() > a.getRawBits());
}

bool	Fixed::operator < (const Fixed& a) const
{
	return (this->getRawBits() < a.getRawBits());
}

bool	Fixed::operator >= (const Fixed& a) const
{
	return (this->getRawBits() >= a.getRawBits());
}

bool	Fixed::operator <= (const Fixed& a) const
{
	return (this->getRawBits() <= a.getRawBits());
}

bool	Fixed::operator == (const Fixed& a) const
{
	return (this->getRawBits() == a.getRawBits());
}

bool	Fixed::operator != (const Fixed& a) const
{
	return (this->getRawBits() != a.getRawBits());
}

Fixed	Fixed::operator + (const Fixed& a)
{
	Fixed	res;

	res.setRawBits(a.getRawBits() + getRawBits());
	return (res);
}

Fixed Fixed::operator - (const Fixed& a)
{
	Fixed res;

	res.setRawBits(getRawBits() - a.getRawBits());
	return (res);
}

Fixed Fixed::operator * (const Fixed& a)
{
	Fixed res;

	res.setRawBits((getRawBits() * a.getRawBits()) >> fractional);
	return (res);
}

Fixed Fixed::operator / (const Fixed& a)
{
	Fixed	res;

	res.setRawBits(getRawBits() * (1 << fractional) / a.getRawBits());
	return (res);
}

Fixed& Fixed::operator ++(void)
{
	fixed_point_int++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	operator++();
	return (tmp);
}

Fixed& Fixed::operator--(void)
{
	fixed_point_int--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	operator--();
	return (tmp);
}
