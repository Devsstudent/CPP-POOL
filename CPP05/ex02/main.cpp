#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	first("eheh", 3);
	Bureaucrat	second("bruh", 57);
	ShrubberyCreationForm A("bruh");
	RobotomyRequestForm B("bruh");
	PresidentialPardonForm C("eheh");

	first.signForm(A);
	first.signForm(B);
	second.signForm(C);
	first.executeForm(A);
	first.executeForm(B);
	first.executeForm(C);
	while (second.getGrade() > 25)
		second.upGrade();
	second.signForm(C);
	second.executeForm(A);
	second.executeForm(B);
	second.executeForm(C);
}