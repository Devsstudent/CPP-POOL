#include "RPN.hpp"

bool	operand_on_stack(std::stack<long> &stack, type ope)
{
	long	buff;

	if (stack.size() < 2)
		return (false);
	if (ope == ADD)
	{
		buff = stack.top();
		stack.pop();
		buff = stack.top() + buff;
		stack.pop();
		stack.push(buff);
	}
	else if (ope == SUB)
	{
		buff = stack.top();
		stack.pop();
		buff = stack.top() - buff;
		stack.pop();
		stack.push(buff);
	}
	else if (ope == MULT)
	{
		buff = stack.top();
		stack.pop();
		buff = stack.top() * buff;
		stack.pop();
		stack.push(buff);
	}
	else if (ope == DIV)
	{
		buff = stack.top();
		stack.pop();
		if (buff == 0)
		{
			std::cerr << "Cannot divide by 0 :/" << std::endl;
			return (false);
		}
		buff = stack.top() / buff;
		stack.pop();
		stack.push(buff);
	}
	return (true);
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
		if ((isdigit(*it) && isdigit(*(it + 1))) || (!isdigit(*it) && *it != ' ' && *it != '+' && (*it != '-') && *it != '/' && *it != '*'))
				return (false);
		if (*it == '+' && !check_space(it, str))
			return (false);
		if ((*it == '-' && !*(it + 1)) && !check_space(it, str))
			return (false);
		if (*it == '/' && !check_space(it, str))
			return (false);
		if (*it == '*' && !check_space(it, str))
			return (false);
		if (isdigit(*it) || (*it == '-' && isdigit(*(it + 1))))
		{
			if (i > 1)
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
	std::stack<long> stack;
	std::string	arg;
	if (ac > 2 || ac <= 1)
	{
		std::cerr << "Wrong argument number" << std::endl;
		return 1;
	}
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
		if (str[0] == '+' && !operand_on_stack(stack, ADD))
		{
			std::cerr << "Wrong input" << std::endl;
			return 3;
		}
		if (str[0] == '-' && !str[1] && !operand_on_stack(stack, SUB))
		{
			std::cerr << "Wrong input" << std::endl;
			return 3;
		}
		if (str[0] == '/' && !operand_on_stack(stack, DIV))
		{
			std::cerr << "Wrong input" << std::endl;
			return 3;
		}
		if (str[0] == '*' && !operand_on_stack(stack, MULT))
		{
			std::cerr << "Wrong input" << std::endl;
			return 3;
		}
		if ((str[0] == '-' && isdigit(str[1])) || (str[0] != '+' && str[0] != '/' && str[0] != '*' && str[0] != '-'))
			stack.push(atol(str));
		str = strtok(NULL, " ");
	}
	std::cout << "Res : " << stack.top() << std::endl;
}
