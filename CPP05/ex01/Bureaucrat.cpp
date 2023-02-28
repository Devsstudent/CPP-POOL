#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, const long _grade)
{
	name = _name;
	setGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
	name = a.name;
	grade = a.grade;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &a)
{
	name = a.name;
	grade = a.grade;
	return (*this);
}

void	Bureaucrat::setGrade(long _grade)
{
	try
	{
		if (_grade >= 150)
			throw (GradeTooHighException());
		else if (_grade <= 0)
			throw (GradeTooLowException());
		else
			grade = _grade;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::upGrade(void)
{
	if (!grade)
		return ;
	setGrade(grade - 1);
}

void	Bureaucrat::downGrade(void)
{
	if (!grade)
		return ;
	setGrade(grade + 1);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor Called" << std::endl;
}

std::ostream&	operator << (std::ostream& os, const Bureaucrat &a)
{
	if (a.getGrade() < 1)
	{
		os << a.getName() << ", bureaucrat as a wrong grade .." << std::endl;
		return (os);
	}
	os << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
	return (os);
}

std::string	Bureaucrat::getName(void) const
{
	return (name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (grade);
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The grade is too Low :)");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The grade is too High :)");
}

void	Bureaucrat::signForm(Form &a)
{
	std::cout << getName();
	a.beSigned(*this);
}
