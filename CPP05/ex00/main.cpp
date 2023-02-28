#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	first("eheh", 3);
	Bureaucrat	second("bruh", 167);
	std::cout << first << std::endl;
	second.upGrade();
	first.upGrade();
	std::cout << first << std::endl;
	std::cout << second<< std::endl;
}
