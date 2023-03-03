/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:28:49 by odessein          #+#    #+#             */
/*   Updated: 2023/03/02 22:45:38 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
	// Attributes
		

	// Forbidden

	public:
	// Constructors
		Intern(void);
		Intern(Intern const &a);

	// Destructor
		~Intern(void);

	// Getters

	// Setters

	// Operators
		Intern	&operator=(Intern const &a);

	// Methods
	AForm	*makeForm(const std::string form_name, const std::string target);
};

#endif