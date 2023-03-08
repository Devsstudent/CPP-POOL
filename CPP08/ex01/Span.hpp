/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:41:22 by odessein          #+#    #+#             */
/*   Updated: 2023/03/08 16:00:49 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
	private:
		unsigned int		n;
		int					filled;
		std::vector<int>	arr;
	// Attributes
		

	// Forbidden

	public:
	// Constructors
		Span(void);
		Span(Span const &rhs);

	// Destructor
		~Span(void);

	// Getters

	// Setters

	// Operators
		Span	&operator=(Span const &rhs);

	// Methods
};

#endif
