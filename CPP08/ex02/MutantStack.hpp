/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:55:53 by odessein          #+#    #+#             */
/*   Updated: 2023/03/09 17:13:51 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <iostream>

template <class T>
class MutantStack : public std::stack<T>
{
	private:
	// Attributes
		

	// Forbidden

	public:
	// Constructors
		MutantStack(void);
		MutantStack(MutantStack const &rhs);

	// Destructor
		~MutantStack(void);

	// Getters

	// Setters

	// Operators
		MutantStack	&operator=(MutantStack const &rhs);

	// Methods
};

#endif
