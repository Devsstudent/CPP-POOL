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
  (void) a;
  return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
  
}


//function
  //check nan
  //check nanf
  //check -inf
  //check +inf

bool	is_int(const std::string name)
{
	size_t	idx;
	int		res;

	res = std::stoi(name, &idx);
	if (idx == name.length())
		return (true);
	return (false);
}

bool	is_float(const std::string name)
{
	size_t	idx;
	float	res;

	res = stof(name, &idx);
	if (name.c_str[idx] && name.c_str[idx] == 'f' && !name.c_str[idx + 1])
		return (true);
	return (false):
}

bool	is_double(const std::string name)
{
	size_t	idx;
	double	res;

	res = stod(name, &idx);
	if (idx == name.length())
		return (true);
	return (false):
}

bool	is_char(const std::string name)
{
	if (is_int(name) || is_float(name) || is_double(name))
		return (true);
	if (name.c_str().length == 1)
		return (true);
}

void	toChar(const std::string name)
{
	if (!is_char(name))
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	if (is_int(name) || is_float(name) || is_double(name))
	{
		std::cout << static_cast<char>(is_int(name)) << std::endl;
		return ;
	}
	else
		std::cout << static_cast<char>(name.c_str()[0]) << std::endl;
}

void	toInt(const std::string name)
{
	if (is_int(name) || is_float(name) || is_double(name))
	{
		std::cout << static_cast<int>(std::stoi(name))  << std::endl;
	}
	else
		std::cout << "Impossible" << std::endl;
}

void	toDouble(const std::string name)
{
	if (is_int(name) || is_float(name) || is_double(name))
	{
		std::cout << static_cast<double>(std::stod(name))  << std::endl;
	}
	else
		std::cout << "Impossible" << std::endl;
}

void	toFloat(const std::string name)
{
	if (is_int(name) || is_float(name) || is_double(name))
	{
		std::cout << static_cast<float>(std::stof(name)) << "f"  << std::endl;
	}
	else
		std::cout << "Impossible" << std::endl;
}

static void  ScalarConverter::convert(const std::string name)
{
	std::cout << "char : ";
	toChar(name);
	std::cout << "int : "
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
