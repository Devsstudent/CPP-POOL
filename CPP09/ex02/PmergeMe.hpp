/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:27:52 by odessein          #+#    #+#             */
/*   Updated: 2023/04/05 19:50:24 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <list>
# include <iostream>
# include <stdlib.h>
# include <ctime>
# include <utility>
# include <algorithm>

class PmergeMe
{
	private:
		std::vector<long long unsigned>	jacob;
	// Attributes

	// Forbidden

	public:
	// Constructors
		PmergeMe(void);
		PmergeMe(PmergeMe const &rhs);

	// Destructor
		~PmergeMe(void);

	// Getters

	// Setters

	// Operators
		PmergeMe	&operator=(PmergeMe const &rhs);

	// Methods
	std::vector<int>::iterator GetPos(std::vector<int> &vec);
	std::deque<int>::iterator GetPos(std::deque<int> &vec);
};

template <class T> void sort_pair(T &a)
{
	for (typename T::iterator it = a.begin(); it != a.end(); it++)
	{
		if (it->second < it->first && it->second != -1)
		{
			int	tmp;
			tmp = it->second;
			it->second = it->first;
			it->first = tmp;
		}
	}
};

template <class T> bool	add(int ac, char **av, T &a)
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
				a.push_back(buff_pair);
				break ;
			}
		}
		a.push_back(buff_pair);
	}
	return (true);
};

template <class T> void display_before(T &a)
{
	std::cout << "Before : ";
	for (typename T::iterator it = a.begin(); it != a.end(); it++)
	{
		std::cout << it->first << " ";
		if (it->second != -1)
			std::cout << it->second << " ";
	}
	std::cout << std::endl;
};

template <class T> void display_after(T &a)
{
	std::cout << "After : ";
	for (typename T::iterator it = a.begin(); it != a.end(); it++)
		std::cout << it->first << " ";
	std::cout << std::endl;
};

template <class T> int	binarySearch(T &a, int value, int L, int R)
{
	if (abs(L - R) <= 1)
		return (L);
	int	mid = (L + R) / 2 - 1;
	if (value > a[mid].first)
		return (binarySearch(a, value, mid + 1, R));
	else
		return (binarySearch(a, value, L, mid));
};

template <class T> void	insert(T &a, int value, int index)
{
	std::pair<int, int>	pair;

	pair.first = value;
	pair.second = -1;

	if (value > a[index].first)
	{
		if (a.begin() + index < a.end())
			a.insert(a.begin() + index + 1, pair);
		else
			a.insert(a.begin() + index, pair);
	}
	else
		a.insert(a.begin() + index, pair);
};

template <class T, class G> void	binaryInsertSort(T &a, G &toInsert)
{
	typename G::iterator elem;
	int	index;
	PmergeMe	jacob;
	while (!toInsert.empty())
	{
		elem = jacob.GetPos(toInsert);
		if (elem != toInsert.end())
		{
			index = binarySearch(a, *elem, 0, a.size());
			insert(a, *elem, index);
			toInsert.erase(elem);
		}
		else
		{
			index = binarySearch(a, *(toInsert.begin()), 0, a.size());
			insert(a, *(toInsert.begin()), index);
			toInsert.erase(toInsert.begin());
		}
	}
};

#endif
