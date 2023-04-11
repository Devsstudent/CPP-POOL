/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:00:21 by odessein          #+#    #+#             */
/*   Updated: 2023/04/11 15:58:30 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Serializer.hpp"

// Constructors
Serializer::Serializer(void)
{
	std::cout << "Serializer constructor called" << std::endl;
}

Serializer::Serializer(Serializer const &rhs)
{
	(void) rhs;
	std::cout << "Serializer copy constructor called" << std::endl;
}

// Destructor
Serializer::~Serializer(void)
{
	std::cout << "Serializer destructor called" << std::endl;
}

// Operators
Serializer	&Serializer::operator=(Serializer const &rhs)
{
	(void) rhs;
	return (*this);
}

// Methods

uintptr_t	Serializer::serialize(Data *ptr)
{
	if (!ptr)
		return (0);
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	if (!raw)
		return (NULL);
	return (reinterpret_cast<Data *>(raw));
}
