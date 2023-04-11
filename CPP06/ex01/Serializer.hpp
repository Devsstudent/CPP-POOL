/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:00:13 by odessein          #+#    #+#             */
/*   Updated: 2023/04/11 14:32:52 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

typedef struct s_data{
	std::string	content;
}	Data;

class Serializer
{
	private:
		Serializer(void);
	public:
		Serializer(Serializer const &rhs);

		~Serializer(void);
		Serializer	&operator=(Serializer const &rhs);
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
