#include "Point.hpp"

float	cross(Point const a, Point const b)
{
	return (b.getY().toFloat() * a.getX().toFloat()) - b.getX().toFloat() * a.getY().toFloat();
}

float	dot(Point const a, Point const b)
{
	return (b.getX().toFloat() * a.getX().toFloat() + b.getY().toFloat() * a.getY().toFloat());
}


float	sign(Point const x, Point const a, Point const b)
{
	Point ab(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
	Point ax(x.getX().toFloat() - a.getX().toFloat(), x.getY().toFloat() - a.getY().toFloat());

	if (cross (ab, ax) == 0)
		return (0);
	return (dot(ab, ax));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	alpha;
	float	beta;
	float	gamma;
	bool	has_neg;
	bool	has_pos;

	if (a.getX().toFloat() == point.getX().toFloat() && a.getY().toFloat() == point.getY().toFloat())
		return (false);
	if (b.getX().toFloat() == point.getX().toFloat() && b.getY().toFloat() == point.getY().toFloat())
		return (false);
	if (c.getX().toFloat() == point.getX().toFloat() && c.getY().toFloat() == point.getY().toFloat())
		return (false);
	alpha = sign(point, a, b);
	beta = sign(point, b, c);
	gamma = sign(point, c, a);
	has_neg = (gamma < 0) && (beta < 0) && (alpha < 0);
	if (has_neg)
		return (has_neg);
	has_pos = (gamma > 0) && (beta > 0) && (alpha > 0);
	if (has_pos)
		return (has_pos);
	return (false);
}
