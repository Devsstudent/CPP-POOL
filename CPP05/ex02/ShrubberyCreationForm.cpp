/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:44:40 by odessein          #+#    #+#             */
/*   Updated: 2023/02/28 18:47:06 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(const std::string _name, const int _grade_sign, const int _grade_exec) Form(_name, _grade_sign, _grade_exec)
{
	std::cout << "ShrubberyCreationForm Constructor Called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs)
{
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

// Getters

// Setters

// Operators
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	return (*this);
}

// Methods
