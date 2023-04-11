#include "BitcoinExchange.hpp"
#include <algorithm>
 
std::string trim(const std::string &s)
{
	std::string	res;

	res = s;
	std::remove(res.begin(), res.end(), ' ');
	return (res);
}
void	fill_arr(long arr[3], std::string date)
{
	int	idx;
	int	idx1;

	idx1 = 0;
	idx1 = date.find_first_of("-", idx1);
	arr[0] = atof(date.substr(0, idx1).c_str());
	idx = date.find_first_of("-", idx1 + 1);
	arr[1] = atof(date.substr(idx1 + 1, idx).c_str());
	idx1 = date.find_first_of("-", idx1);
	arr[2] = atof(date.substr(idx + 1, idx1).c_str());
}

bool	check_date(std::string	date)
{
	long	buff[3];
	std::string::iterator	it = date.begin();
	for (;(*it != '-' && it < date.end()); it++)
		if (!isdigit(*it))
			return (false);
	int		size = 0;
	for (;(*it != '-'&& it < date.end()); it++)
	{
		if (!isdigit(*it) || size > 2)
			return (false);
		size++;
	}
	size = 0;
	for (;(*it != '-' && it < date.end()); it++)
	{
		if (!isdigit(*it) || size > 2)
			return (false);
		size++;
	}
	fill_arr(buff, date);
	if (buff[0] < 0 || buff[0] < 2009 || (buff[0] == 2009 && (buff[1] < 1 || buff[2] < 2)))
		return (false);
	if (buff[1] > 12 || buff[1] <= 0)
		return (false);
	if (buff[2] > 31 || buff[2] <= 0)
		return (false);
	return (true);
}

bool	check_number(std::string	val)
{
	float	value;

	value = atof(val.c_str());
	if (value <= 0)
	{
		std::cerr << "Error: not a positive number" << std::endl;
		return (false);
	}
	if (value >= 1000)
	{
		std::cerr << "Error: too large a number" << std::endl;
		return (false);
	}
	return (true);
}

bool	fill_map_from_csv(std::multimap<std::string, double> &info)
{
	std::ifstream	data;
	std::string		date;
	std::string		amount;
	double			value;
	std::string		str;
	int				idx;

	data.open("data.csv");
	if (data.bad())
		return (false);
	while (std::getline(data, str))
	{
		idx = str.find_first_of(",");
		date = str.substr(0, idx);
		value = atof(str.substr(idx + 1).c_str());
		info.insert(std::pair<std::string, double>(date, value));
	}
	return (true);
}

std::multimap<std::string, double>::iterator closest_date(std::string date, std::multimap<std::string, double> db)
{
	int	day;
	std::multimap<std::string, double>::iterator	buff;

	std::multimap<std::string, double>::iterator it = db.begin();
	std::multimap<std::string, double>::iterator ite = --db.end();
	if (atoi(date.substr(0, 4).c_str()) > 2022 || (atoi(date.substr(0, 4).c_str()) == 2022 && atoi(date.substr(5, 2).c_str()) > 3) || (atoi(date.substr(0, 4).c_str()) ==     2022 && atoi(date.substr(5, 2).c_str()) == 3 && atoi(date.substr(8).c_str()) > 29))
		return (--ite);
	for (; it != db.end(); it++)
	{
		if (it->first.substr(0, 7) == date.substr(0, 7))
		{
			day = atoi(it->first.substr(8).c_str());
			if (day > atoi(date.substr(8).c_str()))
				return (buff);
			buff = it;
		}
	}
	return (buff);
}

int	main(int ac, char **av)
{
	if (ac > 2 || ac < 2)
		return (1);
	std::multimap<std::string, double>	info;
	std::ifstream	input;
	input.open(av[1]); if (input.bad())
	{
		std::cerr << "Cannot open argument files" << std::endl;
		return (2);
	}
	if (!fill_map_from_csv(info))
		return (3);
	BitcoinExchange	bitcoin(info);
	std::string	buffer;
	while (std::getline(input, buffer))
		bitcoin.check_line(buffer);
	//Call checkline on the inputfile 
 }
