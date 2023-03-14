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
class MutantStack : public std::stack<T>
{
	private:
	// Attributes
	// Forbidden

	public:
	// Constructors
		MutantStack<T>(void)
		{
			std::cout << "MutanStack constructor called" << std::endl;
		};
		MutantStack(MutantStack const &rhs)
		{
			(void) rhs;
			std::cout << "MutanStack constructor by copy called" << std::endl;
		};
	 // Destructor
		~MutantStack(void)
		{
			std::cout << "MutanStack Desctructor Called" << std::endl;
		};

	// Getters

	// Setters

	// Operators
		MutantStack	&operator=(MutantStack const &rhs){
			(void) rhs;
			return (*this);
	}
	typedef typename Container::iterator iterator;
	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}
	// Methods
};

#endif
