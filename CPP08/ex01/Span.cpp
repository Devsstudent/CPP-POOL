/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:41:29 by odessein          #+#    #+#             */
/*   Updated: 2023/03/08 16:12:04 by odessein         ###   ########.fr       */
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
	this = rhs;
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
	arr.clear();
	return (*this);
}

// Methods
void	addNumber(int nb)
{
	if (filled == n)
		std::cout << "Cannot add more numbers" << std::endl;
}
