/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:22:09 by odessein          #+#    #+#             */
/*   Updated: 2023/03/01 13:27:55 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
	// Attributes
	const std::string		target;
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);
	// Forbidden

	public:
	// Constructors
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &a);

	// Destructor
		~PresidentialPardonForm(void);

	// Getters

	// Setters

	// Operators

	// Methods
	void	PardonForm(void) const;
};

#endif
