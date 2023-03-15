/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:43:59 by odessein          #+#    #+#             */
/*   Updated: 2023/03/15 15:56:28 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <deque>
# include <string>
# include <iostream>

class RPN
{
	private:
	// Attributes
		

	// Forbidden

	public:
	// Constructors
		RPN(void);
		RPN(RPN const &rhs);

	// Destructor
		~RPN(void);

	// Getters

	// Setters

	// Operators
		RPN	&operator=(RPN const &rhs);

	// Methods
};

#endif
