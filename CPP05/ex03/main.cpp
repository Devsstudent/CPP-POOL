#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	first("eheh", 3);
	Bureaucrat	second("bruh", 57);
	AForm				*ahah;
	Intern			imIntern;

	ahah = imIntern.makeForm("robotomy request", "bruh");
	first.signForm(*ahah);
	while (second.getGrade() > 25)
		second.upGrade();
	second.executeForm(*ahah);
}