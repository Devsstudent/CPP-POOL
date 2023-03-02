/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:41:43 by odessein          #+#    #+#             */
/*   Updated: 2023/03/01 13:27:21 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		const std::string	target;
	// Operators
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &a);

	// Forbidden

	public:
	// Constructors
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &a);

	// Destructor
		~ShrubberyCreationForm(void);

	// Getters

	// Setters


	// Methods
	void	CreationForm(void) const;
};

#endif
