#include "PmergeMe.hpp"

bool	add_to_vec(int ac, char **av, std::vector<int> &vec)
{
	int			i = 1;
	long int	buff;

	while (i < ac)
	{
		std::string	buff = av[i];
		if (buff.length() > 11)
			return (false);
		else
			buff = atol(av[i]);
		if (buff > 2147483647 || buff < -2147483648)
			return (false);
		vec.insert(buff);
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
	std::vector<int> vec;
	add_to_vec(ac, av, vec);
}
