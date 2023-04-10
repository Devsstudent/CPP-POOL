#include "easyfind.hpp"

#include <vector>

int	main(void)
{
	int arr[] = {10, 20, 5, 23 ,42, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
	std::vector<int> vect(arr, arr + n);
	::easyfind(vect, -1);
}
