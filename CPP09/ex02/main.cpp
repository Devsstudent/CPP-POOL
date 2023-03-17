#include "PmergeMe.hpp"

bool	add_to_vec(int ac, char **av, std::vector<int> &vec)
{
	int			i = 1;
	long int	buff_val;

	while (i < ac)
	{
		std::string	buff = av[i];
		if (buff.length() > 11)
			return (false);
		else
			buff_val = atol(av[i]);
		if (buff_val > 2147483647 || buff_val < -2147483648)
			return (false);
		vec.push_back(buff_val);
		i++;
	}
	return (true);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		return 1;
	int	i = 1;
	//Checking basic parsing
	while (i < ac)
	{
		std::string	buff = av[i];
		for (std::string::iterator it = buff.begin(); it < buff.end(); it++)
		{
			if (*it == '-' && !isdigit(*(it + 1)))
			{
				std::cerr << "Wrong input" << std::endl;
				return (1);
			}
			else if (!isdigit(*it) && (*it != '-'))
			{
				std::cerr << "Wrong input" << std::endl;
				return (1);
			}
			if (buff.find("--") != std::string::npos)
			{
				std::cerr << "Wrong input" << std::endl;
				return (1);
			}
		}
		i++;
	}
	std::vector<int>	vec;
	PmergeMe	a;
	std::clock_t start = std::clock();
	if (!add_to_vec(ac, av, vec))
		std::cerr << "Wrong input" << std::endl;
	std::clock_t end = std::clock();
	std::cout << (double) ((double) ((double) end / (double) CLOCKS_PER_SEC * 1000) - (double)(( start / (double) CLOCKS_PER_SEC) * 1000)) << " us" << std::endl;
/*
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << std::endl;
*/
}
