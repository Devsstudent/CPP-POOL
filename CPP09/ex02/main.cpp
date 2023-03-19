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

//recursivly :
	//get the vector
	//check that is lenght is not 1;
	//get the middle
	//recall the fucntion from start - middle : mean left
	//reall the function from middle - end : mean right

	//Merge


/*
static	std::vector<std::pair<int, int> > get_half_sorted_vec(std::vector<std::pair<int, int> > &vec)
{
	std::vector<std::pair<int ,int> > new_arr;

	new_arr = merge_sort(vec, 0, vec.size());
}
*/


//Map des nombres de jacobsthal avec en value leurs index

//
//Start a 0 size 

int	binarySearch(std::vector<std::pair<int, int> > &vec, int value, int L, int R)
{
	if (abs(L - R) == 1)
		return (L + 1);
	int	mid = (L + R) / 2;
	if (value > vec[mid].first)
		return (binarySearch(vec, value, mid + 1, R));
	else
		return (binarySearch(vec, value, L, mid));
}


//insert function : create a pair to insert, checking the position to know before or after the index

void	binaryInsertSort(std::vector<std::pair<int, int> > &vec, std::vector<int> &toInsert)
{
	std::vector<int>::iterator it = toInsert.begin();
	std::vector<int>::iterator elem;
	PmergeMe	jacob;
	//Search dans la map la value la plus interessante selon Jacob // sauf pour la premiere xD
	//On lance la binary search avec cette value
	//On check value >= a value at vec.begin() + index if yes insert at index + 1 else insert at index
	while (!toInsert.empty())
	{
		elem = jacob.getJacobMostInteressante(toInsert);
		if (elem != toInsert.end())
		{
			//check le res de ca pour savoir ou on insert
			binarySearch(vec, *elem, 0, vec.size());
			toInsert.erase(elem);
		}
		else
		{
			binarySearch(vec, toInsert.begin(), 0, vec.size());
			toInsert.erase(toInsert.begin());
		}
		//Se
	}
}

static void	sort_by_vect(int ac, char **av)
{
	std::vector<std::pair<int, int> >	vec;
	//std::clock_t start = std::clock();

	if (!add_to_vec(ac, av, vec))
		std::cerr << "Wrong input" << std::endl;
	//std::clock_t end = std::clock();
	sort_pair(vec);
	std::sort(vec.begin(), vec.end());
	for (std::vector<std::pair<int, int> >::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << it->first << " " << it->second << std::endl;
	//binaryInsertSort(vec);
	//Then i have to 
	//std::cout << (double) ((double) ((double) end / (double) CLOCKS_PER_SEC * 1000) - (double)(( start / (double) CLOCKS_PER_SEC) * 1000)) << " us" << std::endl;
	std::cout << "HEYY" << std::endl;
	for (std::vector<std::pair<int, int> >::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << it->first << " " << it->second << std::endl;
	//std::vector<std::pair<int, int> > final_vec = get_half_sorted_vec(vec);
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
			if (!isdigit(*it))
			{
				std::cerr << "Wrong input" << std::endl;
				return (1);
			}
		}
		i++;
	}
	sort_by_vect(ac, av);
}
