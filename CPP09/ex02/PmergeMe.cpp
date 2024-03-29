/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:27:46 by odessein          #+#    #+#             */
/*   Updated: 2023/03/17 15:31:46 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<long long unsigned>	init_jacob(void)
{
	static const int arr[] = {0, 1, 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941};
	std::vector<long long unsigned> res (arr, arr + sizeof(arr) / sizeof(arr[0]));
	return (res);
}
// Constructors
PmergeMe::PmergeMe(void):jacob(init_jacob())
{
}

PmergeMe::PmergeMe(PmergeMe const &rhs):jacob(rhs.jacob)
{
	(void) rhs;
}

// Destructor
PmergeMe::~PmergeMe(void)
{
}

// Getters

// Setters

// Operators
PmergeMe	&PmergeMe::operator=(PmergeMe const &rhs)
{
	(void) rhs;
	return (*this);
}
// Methods

std::vector<int>::iterator PmergeMe::GetPos(std::vector<int> &vec)
{
	std::vector<long long unsigned>::iterator it = jacob.begin();
	std::vector<long long unsigned>::iterator find_res;
	std::vector<int>::iterator pos;
	int	buff = -1;

	pos = vec.end();
	for (std::vector<int>::iterator it2 = vec.begin(); it2 != vec.end(); it2++)
	{
		find_res = find(it, jacob.end(), *it2);
		if (find_res != jacob.end() && (buff == -1 || (buff != -1 && buff < find_res - it)))
		{
			buff = find_res - it;
			pos = it2;
		}
	}
	return (pos);
}
std::deque<int>::iterator PmergeMe::GetPos(std::deque<int> &vec)
{
	std::vector<long long unsigned>::iterator it = jacob.begin();
	std::vector<long long unsigned>::iterator find_res;
	std::deque<int>::iterator pos;
	int	buff = -1;

	pos = vec.end();
	for (std::deque<int>::iterator it2 = vec.begin(); it2 != vec.end(); it2++)
	{
		find_res = find(it, jacob.end(), *it2);
		if (find_res != jacob.end() && (buff == -1 || (buff != -1 && buff < find_res - it)))
		{
			buff = find_res - it;
			pos = it2;
		}
	}
	return (pos);
}
