#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
  
}

ScalarConverter::ScalarConverter(const ScalarConverter &a)
{
  (void) a;
}

ScalarConverter &ScalarConverter::operator = (const ScalarConverter &a)
{
  (void) a; return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
  
}

bool	is_int(std::string name)
{
	unsigned int	idx;

	idx = 0;
	for (std::string::iterator it = name.begin(); (std::isdigit(*it) || *it == '-'); it++)
	{
		if (*it == '-' && (name.c_str()[0] != '-' || name.length() <= 1))
			return (false);
		idx++;
	}
	if (idx == name.length())
		return (true);
	return (false);
}

bool	is_float(const std::string name)
{
	bool						point;
	unsigned int				i;
	std::string::const_iterator	it;

	point = false;
	i = 0;
	it = name.begin();
	while (it != name.end() && (std::isdigit(*it) || *it == '.' || *it == 'f' || *it == '-'))
	{
		if (*it == '-' && (name.c_str()[0] != '-' || name.length() <= 1))
			return (false);
		if (*it == '.' && !point)
			point = true;
		else if (*it == '.' && point)
			return (false);
		i++;
		it++;
	}
	if (i != name.length())
		return (false);
	return (true);
}

bool	is_nan(const std::string name)
{
	if (name == "nan")
		return (true);
	return (false);
}

bool	is_p_inf(const std::string name)
{
	if (name == "+inf")
		return (true);
	return (false);
}

bool	is_n_inf(const std::string name)
{
	if (name == "-inf")
		return (true);
	return (false);
}

bool	is_double(const std::string name)
{
	bool						point;
	unsigned int				i;
	std::string::const_iterator	it;

	point = false;
	i = 0;
	it = name.begin();
	while (it != name.end() && (std::isdigit(*it) || *it == '.' || *it == '-'))
	{
		if (*it == '-' && (name.c_str()[0] != '-' || name.length() <= 1))
			return (false);
		if (*it == '.' && !point)
			point = true;
		else if (*it == '.' && point)
			return (false);
		i++;
		it++;
	}
	if (i != name.length())
		return (false);
	return (true);
}

bool	is_char(const std::string name)
{
	unsigned int				i;

	i = 0;
	if (name.length() == 1 && !isdigit(name.c_str()[0]))
		return (true);
	return (false);
}

void	toChar(const std::string name)
{
	if (is_char(name))
		std::cout << static_cast<char>(name.c_str()[0]) << std::endl;
	else if (is_int(name) || is_float(name) || is_double(name))
	{
		if ((static_cast<long long>(std::atof(name.c_str())) > 32 && static_cast<long>(std::atof(name.c_str())) < 126) && (static_cast<long>(std::atof(name.c_str()) < 2147483647 && static_cast<long>(std::atof(name.c_str())) > -2147483648)))
			std::cout << static_cast<char>(std::atoi(name.c_str())) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "Impossible" << std::endl;
}

void	toInt(const std::string name)
{
	long	buff;

	buff = static_cast<long>(std::atof(name.c_str()));
	if (buff > 2147483647 || buff < -2147483648)
		std::cout << "Impossible" << std::endl;
	else if (is_int(name) || is_float(name) || is_double(name))
		std::cout << static_cast<int>(std::atoi(name.c_str())) << std::endl;
	else if (is_char(name))
		std::cout << static_cast<int>(name.c_str()[0]) << std::endl;
	else if (is_p_inf(name) || is_n_inf(name))
		std::cout << "Impossible" << std::endl;
	else if (is_nan(name))
		std::cout << std::numeric_limits<float>::quiet_NaN() << std::endl;
	else
		std::cout << "Impossible" << std::endl;
}

void	toDouble(const std::string name)
{
	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);
	if (is_double(name) || is_float(name) || is_int(name))
		std::cout << static_cast<double>(std::atof(name.c_str()))  << std::endl;
	else if (is_char(name))
		std::cout << static_cast<double>(name.c_str()[0]) << std::endl;
	else if (is_p_inf(name))
		std::cout << "+" << std::numeric_limits<double>::infinity() << std::endl;
	else if (is_n_inf(name))
		std::cout << "-" << std::numeric_limits<double>::infinity() << std::endl;
	else if (is_nan(name))
		std::cout << std::numeric_limits<double>::quiet_NaN() << std::endl;
	else
		std::cout << "Impossible" << std::endl;
}

void	toFloat(const std::string name)
{
	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);
	if (is_int(name) || is_float(name) || is_double(name))
		std::cout << static_cast<float>(atof(name.c_str())) << "f"  << std::endl;
	else if (is_char(name))
		std::cout << static_cast<float>(name.c_str()[0]) << "f" << std::endl;
	else if (is_p_inf(name))
		std::cout << "+" << std::numeric_limits<float>::infinity() << std::endl;
	else if (is_n_inf(name))
		std::cout << "-" << std::numeric_limits<float>::infinity() << std::endl;
	else if (is_nan(name))
		std::cout << std::numeric_limits<double>::quiet_NaN() << "f"  <<std::endl;
	else
		std::cout << "Impossible" << std::endl;
}

void  ScalarConverter::convert(const std::string name)
{
	std::cout << "char : ";
	toChar(name);
	std::cout << "int : ";
	toInt(name);
	std::cout << "float : ";
	toFloat(name);
	std::cout << "double : ";
	toDouble(name);
  //convert  char
  //convert  int
  //convert  float
  //convert  double
}
