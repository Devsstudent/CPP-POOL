/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:05:27 by odessein          #+#    #+#             */
/*   Updated: 2023/03/01 13:28:12 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	target;
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);
	public:
	// Constructors
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &a);

	// Destructor
		~RobotomyRequestForm(void);

	// Getters

	// Setters

	// Operators

	// Methods
		void	RequestForm(void) const;
};

#endif
