#include "iter.hpp"

void	print(int &a)
{
	std::cout << a << std::endl;
}

int	main(void)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6 ,7 ,8 ,9};
	::iter(arr, 10, &print);
}
