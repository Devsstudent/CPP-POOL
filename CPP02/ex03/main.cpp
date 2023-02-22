#include "Point.hpp"
#include "Fixed.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(100, 0 );
	Point	c(5, 100);
	Point	point(10, 10);

	if (bsp(a, b, c, point))
		return (std::cout << "The point is in the ABC triangle" << std::endl, 1);
	std::cout << "The point isn't in the ABC triangle" << std::endl;
}
