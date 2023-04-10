/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:41:29 by odessein          #+#    #+#             */
/*   Updated: 2023/03/27 18:51:16 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors
Span::Span(void): n(0), filled(0)
{
}

Span::Span(int	_n): filled(0)
{
	if (_n > 0)
		n = _n;
	else
		n = 0;
}

Span::Span(Span const &rhs)
{
	*this = rhs;
}

// Destructor
Span::~Span(void)
{
	
}

// Getters

// Setters

// Operators
Span	&Span::operator=(Span const &rhs)
{
	n = rhs.n;
	filled = rhs.filled;
	arr.clear();
	arr = rhs.arr;
	return (*this);
}

// Methods
void	Span::addNumber(int nb)
{
	if (filled == n)
		throw (Exception_out());
	filled++;
	arr.push_back(nb);
}

void	Span::addManyNumbers(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		try {
			addNumber(arr[i]);
		}
		catch (Exception_out& exception) {
			std::cerr << exception.what() << std::endl;
		}
	}
}

int	Span::shortestSpan(void)
{
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	int							buff;
	int							max_val;
	bool						same;


	it = std::max_element(arr.begin(), arr.end());
	max_val = *it;
	if (filled <= 1)
		throw (Exception_not_enough());
	buff = max_val;
	for (it = arr.begin(); it != arr.end(); ++it)
	{
		same = false;
		for (it2 = arr.begin(); it2 != arr.end(); ++it2)
		{
			if (*it == *it2)
				same = true;
			else if (*it == *it2 && same)
				return (0);
			else if (abs(*it - *it2) < buff)
				buff = abs(*it - *it2);
		}
	}
	return (buff);
}

const char	*Span::Exception_out::what() const throw()
{
	return ("Not possible to add element");
}

const char	*Span::Exception_not_enough::what() const throw()
{
	return ("Not possible to search span with less than 2 elem :'(");
}

int	Span::longestSpan(void)
{
	std::vector<int>::iterator	it;
	int							max_val;
	int							min_val;

	if (filled <= 1)
		throw (Exception_not_enough());
	it = std::min_element(arr.begin(), arr.end());
	min_val = *it;
	it = std::max_element(arr.begin(), arr.end());
	max_val = *it;
	if (min_val == max_val)
		return (0);
	else
		return (max_val - min_val);
}
