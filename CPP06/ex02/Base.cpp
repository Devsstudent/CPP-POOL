/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:25:57 by odessein          #+#    #+#             */
/*   Updated: 2023/03/07 14:51:46 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void)
{
	std::cout << "Base destructor called" << std::endl;
}

Base	*Base::generate(void)
{
	time_t	t;
	int		val;

	srand((unsigned) time(&t));
	val = rand() % 3;
	if (val == 1)
		return (new A);
	else if (val == 0)
		return (new B);
	else
		return (new C);
}

void	Base::identify(Base *p)
{
	if (!p)
		return ;
	try {
		A *A = dynamic_cast<class A*> (p);
		if (A != NULL)
			std::cout << "A" << std::endl;
	}
	catch(...)
	{
	}
	try {
		B *B= dynamic_cast<class B*> (p);
		if (B != NULL)
			std::cout << "B" << std::endl;
	}
	catch (...)
	{
	}
	try {
		C *C = dynamic_cast<class C*> (p);
		if (C != NULL)
			std::cout << "C" << std::endl;
	}
	catch (...)
	{
	}
}

void	Base::identify(Base &p)
{
	try {
		A &A = dynamic_cast<class A&> (p);
		(void) A;
			std::cout << "A" << std::endl;
	}
	catch(...)
	{
	}
	try {
		B &B= dynamic_cast<class B&> (p);
			std::cout << "B" << std::endl;
		(void) B;
	}
	catch (...)
	{
	}
	try {
		C &C = dynamic_cast<class C&> (p);
			std::cout << "C" << std::endl;
		(void) C;
	}
	catch (...)
	{
	}
}
