/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:26:15 by odessein          #+#    #+#             */
/*   Updated: 2023/03/07 14:36:54 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <stdlib.h>

class Base
{
	public:
		virtual ~Base(void);
		Base	*generate(void);
		void	identify(Base *p);
		void	identify(Base &p);
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif
