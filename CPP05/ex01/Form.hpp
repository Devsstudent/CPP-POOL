#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form{
	private:
		bool	_signed;
		const	std::string	name;
		const	int	grade_sign;
		const	int	grade_exec;
	public:
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException(void);
				virtual const char * what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				GradeTooLowException(void);
				virtual const char * what() const throw();
		};
		class GradeWrongException: public std::exception {
			public:
				GradeWrongException(void);
				virtual const char * noGrade() const throw();
		};
		Form(const std::string _name, const int _grade_sign, const int _grade_exec);
		Form(const Form &a);
		Form & operator = (const Form &a);
		~Form(void);
		int					initGrade(const int _grade);
		void				beSigned(const Bureaucrat &a);
		bool				getSign(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;
		const std::string	getName(void) const;
};

std::ostream& operator << (std::ostream& os, const Form &form);

#endif
