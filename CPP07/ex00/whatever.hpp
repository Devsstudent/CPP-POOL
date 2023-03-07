/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:51:46 by odessein          #+#    #+#             */
/*   Updated: 2023/03/07 16:11:12 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <class T> void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T> T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <class T> T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
