/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:27:52 by odessein          #+#    #+#             */
/*   Updated: 2023/03/16 15:30:31 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <list>
# include <iostream>
# include <climits>
# include <stdlib.h>

class PmergeMe
{
	private:
	// Attributes

	// Forbidden

	public:
	// Constructors
		PmergeMe(void);
		PmergeMe(PmergeMe const &rhs);

	// Destructor
		~PmergeMe(void);

	// Getters

	// Setters

	// Operators
		PmergeMe	&operator=(PmergeMe const &rhs);

	// Methods
};

#endif
