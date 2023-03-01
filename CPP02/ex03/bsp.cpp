#include "Point.hpp"

float	ft_sqrt(float nb)
{
	float	i;

	if (nb == 1)
		return (1);
	i = 2;
	while (i * i <= nb && i <= 46340.0)
	{
		if (i * i == nb)
			return (i);
		i += 1;
	}
	return (0);
}

float	norm(Point const a)
{
	return (ft_sqrt(a.getX().toFloat() * a.getX().toFloat() + a.getY().toFloat() * a.getY().toFloat()));
}

float	dot(Point const a, Point const b)
{
	return (b.getX().toFloat() * a.getX().toFloat() + b.getY().toFloat() * a.getY().toFloat());
}


float	sign(Point const x, Point const a, Point const b)
{
	Point ab(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
	Point ax(x.getX().toFloat() - a.getX().toFloat(), x.getY().toFloat() - a.getY().toFloat());
//	Point bx(x.getX().toFloat() - b.getX().toFloat(), x.getY().toFloat() - b.getY().toFloat());
	/*
	if (norm(bx) + norm(ax) == norm(ab))
	{
		std::cout << "ASDASDAS" << std::endl;
//		std::cout << norm(bx) << " " << norm(ax) << " " << norm(ab) << std::endl;
		return (0);
	}*/
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
	std::cout << alpha << std::endl;
	beta = sign(point, b, c);
	std::cout << beta << std::endl;
	gamma = sign(point, c, a);
	std::cout << gamma << std::endl;
	has_neg = (gamma < 0) && (beta < 0) && (alpha < 0);
	if (has_neg)
		return (has_neg);
	has_pos = (gamma > 0) && (beta > 0) && (alpha > 0);
	if (has_pos)
		return (has_pos);
	return (false);
}
