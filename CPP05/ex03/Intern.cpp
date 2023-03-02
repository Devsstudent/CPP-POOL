/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:31:10 by odessein          #+#    #+#             */
/*   Updated: 2023/03/02 22:48:45 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors
Intern::Intern(void)
{
}
Intern::Intern(Intern const &rhs)
{
}

// Destructor
Intern::~Intern(void)
{
}

// Getters

// Setters

// Operators
Intern	&Intern::operator=(Intern const &rhs)
{
	return (*this);
}

// Methods

static AForm	*create_shrub(const std::string target)
{
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

static AForm	*create_robot(const std::string target)
{
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

static AForm	*create_presidential(const std::string target)
{
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(const std::string form_name, const std::string target)
{
	const std::string	name[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm	*(*form[])(const std::string) = {&create_shrub, &create_robot, &create_presidential};

	for (int i = 0; i < 3; i++)
	{
		if (name[i].compare(form_name) == 0)
			return (form[i](target));
	}
	std::cout << "Intern cannot create " << form_name << " cause it's not a contract he knew" << std::endl;
	return (NULL);

}
