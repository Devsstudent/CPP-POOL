#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed	a(0.5f);
	Fixed	b;

	b = a;
	std::cout << b << std::endl;
	b = Fixed(-100);
	std::cout << b << std::endl;
	std::cout << a << std::endl;
	b = Fixed(4);
	std::cout << "b = " << b << " a = " << a << " b == a ? -> " << (b == a) << std::endl;
	std::cout << "b = " << b << " a = " << a << " b != a ? -> " << (b != a) << std::endl;
	std::cout << "b = " << b << " a = " << a << " b < a ? -> " << (b < a) << std::endl;
	std::cout << "b = " << b << " a = " << a << " b <= a ? -> " << (b <= a) << std::endl;
	std::cout << "b = " << b << " a = " << a << " b > a ? -> " << (b > a) << std::endl;
	std::cout << "b = " << b << " a = " << a << " b >= a ? -> " << (b >= a) << std::endl;
	std::cout << b << " * " << a << " = " << (b * a) << std::endl;
	std::cout << b << " / " << a << " = " << (b / a) << std::endl;
	std::cout << b << " + " << a << " = " << (b + a) << std::endl;
	std::cout << b << " - " << a << " = " << (b - a) << std::endl;
}

/*
int main( void )
{
	Fixed a(2.2f);
	Fixed const b( Fixed( 5.05f ) / Fixed( 2.25f ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	return 0;
}*/
