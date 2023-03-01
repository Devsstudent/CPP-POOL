/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:41:43 by odessein          #+#    #+#             */
/*   Updated: 2023/02/28 18:47:53 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		const std::string	target;

	// Forbidden

	public:
	// Constructors
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationFormt &a);

	// Destructor
		~ShrubberyCreationForm(void);

	// Getters

	// Setters

	// Operators
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &a);

	// Methods
	void	CreationForm(void)
};

#endif