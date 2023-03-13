/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:55:53 by odessein          #+#    #+#             */
/*   Updated: 2023/03/13 16:47:41 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <iostream>

template <class T, class Container = std::deque<T>>
class	iterator : public std::stack<T, Container>
{
	using std::stack<T, Container>::c;

	public :
		auto begin() {return std::begin(c);}
		auto end() {return std::end(c);}
		
		auto begin() const {return std::begin(c);}
		auto end() const {return std::end(c);}
};

template <class T, class Container = std::deque<T>>
class MutantStack : public std::stack<T>
{
	private:
	// Attributes
	// Forbidden

	public:
	// Constructors
		MutantStack<T>(void);
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
