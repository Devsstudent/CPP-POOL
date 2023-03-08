/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:41:22 by odessein          #+#    #+#             */
/*   Updated: 2023/03/08 21:18:49 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <cmath>

class Span
{
	private:
		unsigned int		n;
		unsigned int		filled;
		std::vector<int>	arr;
	// Attributes
		

	// Forbidden

	public:
	// Constructors
		Span(void);
		Span(int _n);
		Span(Span const &rhs);

	// Destructor
		~Span(void);

	// Getters

	// Setters

	// Operators
		Span	&operator=(Span const &rhs);

	// Methods
	int		longestSpan(void);
	int		shortestSpan(void);
	void	addNumber(int nb);
	void	addManyNumbers(int *arr, int size);

	class	Exception_out: public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	class	Exception_not_enough: public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
};

#endif
