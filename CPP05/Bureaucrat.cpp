#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, unsigned int _grade)
{
	name = _name
	try
	{
		grade = _grade;
	}
	catch (this.GradeTooHighException)
	catch (this.GradeTooLowException)
}
