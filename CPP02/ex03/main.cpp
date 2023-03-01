#include "Point.hpp"
#include "Fixed.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(0, 50 );
	Point	c(50, 50);
	Point	point(0.1, 49.9);

	if (bsp(a, b, c, point))
		return (std::cout << "The point is in the ABC triangle" << std::endl, 1);
	std::cout << "The point isn't in the ABC triangle" << std::endl;
}
