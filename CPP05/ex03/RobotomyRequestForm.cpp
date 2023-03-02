/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:07:20 by odessein          #+#    #+#             */
/*   Updated: 2023/03/01 13:28:04 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm(const std::string _target): AForm("RobotomyRequestForm", 72, 45), target(_target)
{
	std::cout << "Robotomy Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &a): AForm(a.getName(), a.getGradeSign(), a.getGradeExec()), target(a.target)
{
	std::cout << "Robotomy Copy Constructor Called" << std::endl;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robotomy Destructor Called" << std::endl;
}

// Getters

// Setters

// Operators

// Methods
void	RobotomyRequestForm::RequestForm(void) const
{
	static int	nb;

	if (nb % 2 == 0)
		std::cout << "BZZZ BZZZ BZZZ " << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "BZZZ BZZZ BZZZ " << target << " robotomizing failed" << std::endl;
}
