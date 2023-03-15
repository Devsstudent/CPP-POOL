/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:49:34 by odessein          #+#    #+#             */
/*   Updated: 2023/03/15 15:05:20 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <fstream>
# include <map>
# include <iostream>
# include <string>
# include <stdlib.h>
# include <limits.h>
void	fill_arr(long arr[3], std::string date);
bool	check_date(std::string	date);
bool	check_number(std::string	val);
bool	fill_map_from_csv(std::multimap<std::string, double> &info);
std::string trim(const std::string &s);
std::multimap<std::string, double>::iterator closest_date(std::string date, std::multimap<std::string, double> db);

class BitcoinExchange
{
	private:
		std::multimap<std::string, double>	_db;
	public:
		BitcoinExchange(std::multimap<std::string, double> &db);
		BitcoinExchange(BitcoinExchange const &rhs);
		~BitcoinExchange(void);
		BitcoinExchange	&operator=(BitcoinExchange const &rhs);
		void	check_line(const std::string	&str);
};

#endif
