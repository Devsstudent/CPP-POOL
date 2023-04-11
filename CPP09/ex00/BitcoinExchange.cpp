/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:49:26 by odessein          #+#    #+#             */
/*   Updated: 2023/04/10 21:36:30 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::multimap<std::string, double> &db): _db(db)
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &rhs): _db(rhs._db)
{

}

BitcoinExchange::~BitcoinExchange(void)
{

}
BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	_db = rhs._db;
	return (*this);
}

// Method

void	BitcoinExchange::check_line(const std::string	&str)
{
	int	idx;

	idx = str.find_first_of("|");
	if (static_cast<size_t>(idx) == std::string::npos)
	{
		std::cout << "Error: bad input => " << str << std::endl;
		return ;
	}
	std::string date = str.substr(0, idx);
	if (!check_date(date))
	{
		std::cout << "Error: bad date => " << date << std::endl;
		return ;
	}
	if (!check_number(str.substr(idx + 1)))
		return ;
	double	amount = atof(str.substr(idx + 1).c_str());
	std::cout << date << "=> " << amount << " = ";
	std::multimap<std::string, double>::iterator it = _db.find(trim(date));
	if (it != _db.end())
		std::cout << it->second * amount << std::endl;
	else
		std::cout << closest_date(date, _db)->second * amount << std::endl;
}
