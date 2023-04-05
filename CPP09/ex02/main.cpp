#include "PmergeMe.hpp"

static std::vector<int>	createFromPair(std::vector<std::pair<int, int> > &vec)
{
	std::vector<int>	res;
	for (std::vector<std::pair<int, int> >::iterator it = vec.begin(); it != vec.end(); it++)
	{
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}

static std::deque<int>	createFromPair(std::deque<std::pair<int, int> > &queue)
{
	std::deque<int>	res;
	for (std::deque<std::pair<int, int> >::iterator it = queue.begin(); it != queue.end(); it++)
	{
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}

static void	sort_by_deque(int ac, char **av)
{
	std::deque<std::pair<int, int> > queue;

	if (!add(ac ,av, queue))
	{
			std::cerr << "Wrong input" << std::endl;
			return ;
	}
	//disp
	sort_pair(queue);
	std::sort(queue.begin(), queue.end());
	std::deque<int> second_queue = createFromPair(queue);
	binaryInsertSort(queue, second_queue);
}

static void	sort_by_vect(int ac, char **av)
{
	std::vector<std::pair<int, int> >	vec;

	if (!add(ac, av, vec))
	{
		std::cerr << "Wrong input" << std::endl;
		return ;
	}

	display_before(vec);

	sort_pair(vec);
	std::sort(vec.begin(), vec.end());
	std::vector<int> second_vec = createFromPair(vec);
	binaryInsertSort(vec, second_vec);
	display_after(vec);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		return 1;
	int	i = 1;
	while (i < ac)
	{
		std::string	buff = av[i];
		for (std::string::iterator it = buff.begin(); it < buff.end(); it++)
		{
			if (!isdigit(*it))
			{
				std::cerr << "Wrong input" << std::endl;
				return (1);
			}
		}
		i++;
	}
	std::clock_t start = std::clock();
	sort_by_vect(ac, av);
	std::clock_t end = std::clock();
	std::cout << "Time to process a range of " << i - 1 << " elements with std::vector : " << (double) ((double) ((double) end / (double) CLOCKS_PER_SEC * 1000) - (double)(( start / (double) CLOCKS_PER_SEC) * 1000)) << " us" << std::endl;
	start = std::clock();
	sort_by_deque(ac, av);
	end = std::clock();
	std::cout << "Time to process a range of " << i - 1 << " elements with std::deque : " << (double) ((double) ((double) end / (double) CLOCKS_PER_SEC * 1000) - (double)(( start / (double) CLOCKS_PER_SEC) * 1000)) << " us" << std::endl;
}
