#include "Point.hpp"


Point::Point(void):x(), y()
{
	std::cout << "Point Constructor Called" << std::endl;
}

Point::Point(const float x, const float y): x(x), y(y)
{
	std::cout << "Point Constuctor bis Called" << std::endl;
}

Point::~Point()
{
	std::cout << "Desctructor called" << std::endl;
}

Point::Point(Point const &a): x(a.getX()), y(a.getY())
{
	std::cout << "Copy Constructor Called" << std::endl;
}

const Fixed&	Point::getX(void) const
{
	return (this->x);
}

const Fixed&	Point::getY(void) const
{
	return (this->y);
}
