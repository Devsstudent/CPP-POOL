/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:20:55 by odessein          #+#    #+#             */
/*   Updated: 2023/03/01 15:32:36 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed{
	private:
		int	fixed_point_int;
		static const int fractional;
	public:
		Fixed();
		Fixed(const Fixed& a);
		Fixed(const int number);
		Fixed(const float number);
		Fixed&	operator = (const Fixed& a);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const  Fixed &a, const Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);

		bool	operator > (const Fixed& a) const;
		bool	operator < (const Fixed& a) const;
		bool	operator >= (const Fixed& a) const;
		bool	operator <= (const Fixed& a) const;
		bool	operator == (const Fixed& a) const;
		bool	operator != (const Fixed& a) const;
		Fixed	operator + (const Fixed& a);
		Fixed	operator - (const Fixed& a);
		Fixed	operator * (const Fixed& a);
		Fixed	operator / (const Fixed& a);
		Fixed&	operator ++ (void);
		Fixed	operator ++ (int);
		Fixed&	operator -- (void);
		Fixed	operator -- (int);
};

std::ostream& operator << (std::ostream& os, const Fixed& value);

#endif
