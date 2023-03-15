#include "RPN.hpp"

bool	check_input(std::string &str)
{
	for (std::string::iterator it = str.begin(); it < str.end(); it++)
	{
		if (*it == '(' || *it == ')' || *it == '.' || isalpha(*it))
			return (false);
	}
	return (true);
}

int	main(int ac, char **av)
{
	std::string	arg;
	if (ac > 2 || ac <= 1)
		return 1;
	arg = av[1];
	if (!check_input(arg))
		return 2;
}
