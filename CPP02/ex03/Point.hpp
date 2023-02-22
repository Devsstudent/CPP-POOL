#ifndef POINT_CPP
# define POINT_CPP
#include "Fixed.hpp"
#include <iostream>


class	Point{
	private:
		const Fixed	x;
		const Fixed	y;
		Point& operator = (const Point& a);
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point& a);
		const Fixed&	getX(void) const ;
		const Fixed& getY(void) const;
		
		~Point(void);
};
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
