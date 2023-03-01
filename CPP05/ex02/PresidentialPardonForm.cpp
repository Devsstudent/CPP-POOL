/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:30:51 by odessein          #+#    #+#             */
/*   Updated: 2023/03/01 13:27:39 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm(const std::string _target): AForm("PresidentialPardonForm", 25, 5), target(_target)
{
	std::cout << "PresidentialPardonForm Constructor Called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a): AForm(a.getName(), a.getGradeSign(), a.getGradeExec()), target(a.target)
{
	std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
}

// Getters

// Setters

// Operators

// Methods

void	PresidentialPardonForm::PardonForm(void) const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
