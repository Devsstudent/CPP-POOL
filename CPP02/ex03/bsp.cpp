#include "Point.hpp"

float	sign(Point const a, Point const b, Point const c)
{
	return ((a.getX().toFloat() - c.getX().toFloat()) * (b.getY().toFloat() - c.getY().toFloat()) - (b.getX().toFloat() - c.getX().toFloat()) * (a.getY().toFloat() - c.getY().toFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	alpha;
	float	beta;
	float	gamma;
	bool	has_neg;
	bool	has_pos;

	alpha = sign(point, a, b);
	beta = sign(point, b, c);
	gamma = sign(point, c, a);
	has_neg = (gamma < 0) || (beta < 0) || (alpha < 0);
	has_pos = (gamma > 0) || (beta > 0) || (alpha > 0);
	return !(has_neg && has_pos);
}
