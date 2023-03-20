#include "PmergeMe.hpp"

bool	add_to_vec(int ac, char **av, std::vector<std::pair<int, int> > &vec)
{
	int			i = 1;
	long int	buff_val;
	std::pair<int, int>	buff_pair;

	while (i < ac)
	{
		std::string	buff = av[i];
		if (buff.length() > 11)
			return (false);
		else
		{
			buff_val = atol(av[i++]);
			if (buff_val > 2147483647 || buff_val < -2147483648)
				return (false);
			buff_pair.first = buff_val;
			if (i < ac)
			{
				buff_val = atol(av[i++]);
				if (buff_val > 2147483647 || buff_val < -2147483648)
					return (false);
				buff_pair.second = buff_val;
			}
			else
			{
				buff_pair.second = -1;
				vec.push_back(buff_pair);
				break ;
			}
		}
		vec.push_back(buff_pair);
	}
	return (true);
}

static void sort_pair(std::vector<std::pair<int, int> > &vec)
{
	for (std::vector<std::pair<int, int> > :: iterator it = vec.begin(); it != vec.end(); it++)
	{
		if (it->second < it->first && it->second != -1)
		{
			int	tmp;
			tmp = it->second;
			it->second = it->first;
			it->first = tmp;
		}
	}
}

int	binarySearch(std::vector<std::pair<int, int> > &vec, int value, int L, int R)
{
	if (abs(L - R) <= 1)
		return (L);
	int	mid = (L + R) / 2;
	if (value > vec[mid].first)
		return (binarySearch(vec, value, mid + 1, R));
	else
		return (binarySearch(vec, value, L, mid));
}

void	insertToVec(std::vector<std::pair<int, int> > &vec, int value, int index)
{
	std::pair<int, int>	pair;

	pair.first = value;
	pair.second = -1;
	if (value > vec[index].first)
	{
		if (vec.begin() + index < vec.end())
			vec.insert(vec.begin() + index + 1, pair);
		else
			vec.insert(vec.begin() + index, pair);
	}
	else
		vec.insert(vec.begin() + index, pair);

}

void	binaryInsertSort(std::vector<std::pair<int, int> > &vec, std::vector<int> &toInsert)
{
	std::vector<int>::iterator elem;
	int	index;
	PmergeMe	jacob;
	while (!toInsert.empty())
	{
		elem = jacob.GetPos(toInsert);
		if (elem != toInsert.end())
		{
			index = binarySearch(vec, *elem, 0, vec.size());
			insertToVec(vec, *elem, index);
			toInsert.erase(elem);
		}
		else
		{
			index = binarySearch(vec, *(toInsert.begin()), 0, vec.size());
			insertToVec(vec, *(toInsert.begin()), index);
			toInsert.erase(toInsert.begin());
		}
	}
}


std::vector<int>	createFromPair(std::vector<std::pair<int, int> > &vec)
{
	std::vector<int>	res;
	for (std::vector<std::pair<int, int> >::iterator it = vec.begin(); it != vec.end(); it++)
	{
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}

static	void display_vec(std::vector<std::pair<int, int> > &vec)
{
	std::cout << "Before : ";
	for (std::vector<std::pair<int, int> >::iterator it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << it->first << " ";
		if (it->second != -1)
			std::cout << it->second << " ";
	}
	std::cout << std::endl;
}

static	void display_after_vec(std::vector<std::pair<int, int> > &vec)
{
	std::cout << "After : ";
	for (std::vector<std::pair<int, int> >::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << it->first << " ";
	std::cout << std::endl;
}

static void	sort_by_vect(int ac, char **av)
{
	std::vector<std::pair<int, int> >	vec;

	if (!add_to_vec(ac, av, vec))
	{
		std::cerr << "Wrong input" << std::endl;
		return ;
	}

	display_vec(vec);

	sort_pair(vec);
	std::sort(vec.begin(), vec.end());
	std::vector<int> second_vec = createFromPair(vec);
	binaryInsertSort(vec, second_vec);
	display_after_vec(vec);
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
	std::cout << "Time to preocess a range of " << i - 1 << " elements with std::vector : " << (double) ((double) ((double) end / (double) CLOCKS_PER_SEC * 1000) - (double)(( start / (double) CLOCKS_PER_SEC) * 1000)) << " us" << std::endl;
	start = std::clock();
	sort_by_vect(ac, av);
	end = std::clock();
	std::cout << "Time to preocess a range of " << i - 1 << " elements with std::vector : " << (double) ((double) ((double) end / (double) CLOCKS_PER_SEC * 1000) - (double)(( start / (double) CLOCKS_PER_SEC) * 1000)) << " us" << std::endl;
}