#include "AForm.hpp"

AForm::AForm(const std::string _name, const int _grade_sign, const int _grade_exec): _signed(false), name(_name), grade_sign(initGrade(_grade_sign)), grade_exec(initGrade(_grade_exec))
{
	std::cout << "AForm Constructor Called" << std::endl;
}

int	AForm::initGrade(const int _grade)
{
	try
	{
		if (_grade <= 0)
			throw (GradeTooHighException());
		else if (_grade > 150)
			throw (GradeTooLowException());
		else
			return (_grade);
	}
	catch (GradeTooLowException& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	catch (GradeTooHighException& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	return (0);
}

AForm::AForm(const AForm &a): _signed(a._signed), name(a.name), grade_sign(a.grade_sign), grade_exec(a.grade_exec)
{
	std::cout << "AForm Constructor Called" << std::endl;
}

AForm	&AForm::operator = (const AForm &a)
{
	_signed = a._signed;
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "AForm Desctructor Called" << std::endl;
}

void	AForm::beSigned(const Bureaucrat &a)
{
	try
	{
		if (getGradeSign() == 0)
			throw (GradeWrongException());
		else if ((int) a.getGrade() > getGradeSign())
			throw (GradeTooLowException());
		else if (a.getGrade() == 0)
			throw (GradeWrongException());
		else
		{
			std::cout << " signed " << getName() << std::endl;
			_signed = true;
		}
	}
	catch (GradeTooLowException& exception)
	{
		std::cout << " couldn't sign because " << exception.what() << std::endl;
	}
	catch (GradeWrongException& exception)
	{
		std::cout << " couldn't sign because " << exception.noGrade() << std::endl;
	}
}

AForm::GradeTooLowException::GradeTooLowException(void)
{}

AForm::GradeTooHighException::GradeTooHighException(void)
{}

AForm::GradeWrongException::GradeWrongException(void)
{}

const char	*AForm::GradeTooLowException::what() const throw ()
{
	return ("his grade is too low"); 
}

const char	*AForm::GradeWrongException::noGrade() const throw ()
{
	return ("some grade are wrong"); 
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("his grade is too high"); 
}

bool	AForm::getSign(void) const
{
	return (_signed);
}

const std::string	AForm::getName(void) const
{
	return (name);
}

int	AForm::getGradeSign(void) const
{
	return (grade_sign);
}

int	AForm::getGradeExec(void) const
{
	return (grade_exec);
}


void	AForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!getSign() || (int) executor.getGrade() <= getGradeExec())
			throw (GradeWrongException());
		if (name == "PresidentialPardonForm")
		{
			PardonForm();
			std::cout << " executed " << getName() << std::endl;
		}
		else if (name == "ShrubberyCreationForm")
		{
			CreationForm();
			std::cout << " executed " << getName() << std::endl;
		}
		else if (name == "RobotomyRequestForm")
		{
			RequestForm();
			std::cout << " executed " << getName() << std::endl;
		}
	}
	catch (GradeWrongException& exception)
	{
		std::cout << " cannot execute " << getName() << std::endl;
	}
}

std::ostream& operator << (std::ostream& os, const AForm &form)
{
	os << form.getName();
	if (form.getSign())
		 os << " is signed";
	else
		os << " isn't signed";
	os << " " << "grade sign : " << form.getGradeSign() << " grade exec : " << form.getGradeExec() << std::endl;
	return (os);
}
