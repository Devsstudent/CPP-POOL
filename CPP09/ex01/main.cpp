#include "RPN.hpp"

void	operand_on_stack(std::deque<long> &stack, type ope)
{
	(void) stack;
	(void) ope;
	
}

bool	check_space(std::string::iterator it, std::string str)
{
		if ((it - 1) != str.begin() && *(it - 1) != ' ')
			return (false);
		if (it != str.end() && (*(it + 1) != 0) && (*(it + 1) != ' '))
			return (false);
	return (true);
}

bool	check_input(std::string &str)
{
	int	i;
	i = 0;
	if (*(str.begin()) == ' ' || (*(str.end() - 1) == ' '))
		return (false);
	for (std::string::iterator it = str.begin(); it < str.end(); it++)
	{
		if (!isdigit(*it) && *it != ' ' && *it != '+' && *it != '-' && *it != '/' && *it != '*')
				return (false);
		if (*it == '+' && !check_space(it, str))
			return (false);
		if (*it == '-' && !check_space(it, str))
			return (false);
		if (*it == '/' && !check_space(it, str))
			return (false);
		if (*it == '*' && !check_space(it, str))
			return (false);
		if (isdigit(*it))
		{
			if ((i > 1 && *it != '0') || i > 2)
				return (false);
			i++;
		}
		else
			i = 0;
	}
	if ((*(str.end() - 1) != '+') && (*(str.end() - 1) != '-') && (*(str.end() - 1) != '*') &&  (*(str.end() - 1) != '/'))
		return (false);
	return (true);
}

int	main(int ac, char **av)
{
	std::deque<long> stack;
	std::string	arg;
	if (ac > 2 || ac <= 1)
		return 1;
	arg = av[1];
	if (!check_input(arg))
	{
		std::cerr << "Wrong input" << std::endl;
		return 2;
	}
	char	*str;
	str = strtok(av[1], " ");
	while (str)
	{
		if (str[0] == '+')
			operand_on_stack(stack, ADD);
		else if (str[0] == '-')
			operand_on_stack(stack, SUB);
		else if (str[0] == '/')
			operand_on_stack(stack, DIV);
		else if (str[0] == '*')
			operand_on_stack(stack, MULT);
		else
			stack.push_front(atol(str));
		std::cout << str << std::endl;
		str = strtok(NULL, " ");
	}
}
