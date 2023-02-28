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

class ShrubberyCreationForm: public AForm
{
	private:

	// Forbidden

	public:
	// Constructors
		ShrubberyCreationForm(const std::string _name, const int _grade_sign, const int _grade_exec);
		ShrubberyCreationForm(const ShrubberyCreationFormt &rhs);

	// Destructor
		~ShrubberyCreationForm(void);

	// Getters

	// Setters

	// Operators
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

	// Methods
};

#endif
