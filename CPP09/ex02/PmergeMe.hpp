/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:27:52 by odessein          #+#    #+#             */
/*   Updated: 2023/03/17 17:11:11 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <list>
# include <iostream>
# include <stdlib.h>
# include <ctime>
# include <utility>
# include <algorithm>

class PmergeMe
{
	private:
		std::vector<long long unsigned>	jacob;
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
	std::vector<int>::iterator GetPos(std::vector<int> &vec);
};

#endif
