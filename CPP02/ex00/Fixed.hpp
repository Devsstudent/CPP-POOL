/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:20:55 by odessein          #+#    #+#             */
/*   Updated: 2023/02/21 10:28:00 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed{
	private:
		int	fixed_point_int;
		static const int fractional;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &a);
		Fixed&	operator = (const Fixed& a);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
