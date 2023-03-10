/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:56:02 by odessein          #+#    #+#             */
/*   Updated: 2023/03/09 16:58:26 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// Constructors
MutantStack::MutantStack(void)
{
	std::cout << "MutanStack constructor called" << std::endl;
}

MutantStack::MutanStack(MutantStack const &rhs)
{
	std::cout << "MutanStack constructor by copy called" << std::endl;
}

// Destructor
MutantStack::~MutantStack(void)
{
	std::cout << "MutanStack Desctructor Called" << std::endl;
}

// Getters

// Setters

// Operators
MutantStack	&MutantStack::operator=(MutantStack const &rhs)
{
	return (*this);
}

// Methods
