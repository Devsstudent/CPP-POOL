#include "Form.hpp"

Form::Form(const std::string _name, const int _grade_sign, const int _grade_exec): _signed(false), name(_name), grade_sign(_grade_sign), grade_exec(_grade_exec)
{
	std::cout << "Form Constructor Called" << std::endl;
}

Form::Form(const Form &a): _signed(a._signed), name(a.name), grade_sign(a.grade_sign), grade_exec(a.grade_exec)
{
	std::cout << "Form Constructor Called" << std::endl;
}

Form	&Form::operator = (const Form &a)
{
	_signed = a._signed;
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form Desctructor Called" << std::endl;
}

void	Form::beSigned(const Bureaucrat &a)
{
	try
	{
		if ((int) a.getGrade() > getGradeSign())
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
		std::cout << " couldn't sign because his " << exception.what() << std::endl;
	}
	catch (GradeWrongException& exception)
	{
		std::cout << " couldn't sign because his " << exception.noGrade() << std::endl;
	}
}

Form::GradeTooLowException::GradeTooLowException(void)
{}

Form::GradeTooHighException::GradeTooHighException(void)
{}

Form::GradeWrongException::GradeWrongException(void)
{}

const char	*Form::GradeTooLowException::what() const throw ()
{
	return ("grade is too low"); 
}

const char	*Form::GradeWrongException::noGrade() const throw ()
{
	return ("grade is wrong"); 
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high"); 
}

bool	Form::getSign(void) const
{
	return (_signed);
}

const std::string	Form::getName(void) const
{
	return (name);
}

int	Form::getGradeSign(void) const
{
	return (grade_sign);
}
