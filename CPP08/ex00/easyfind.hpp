/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:00:30 by odessein          #+#    #+#             */
/*   Updated: 2023/03/08 14:34:04 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T> void	easyfind(T &a, int b)
{

	if (std::find(a.begin(), a.end(), b)  == a.end())
		std::cout << "No way, i cannot find the value " << b << std::endl;
	else
		std::cout << "Nice i found the value " << b << std::endl;
}

#endif
