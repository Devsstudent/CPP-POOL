#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <fstream>

class	Bureaucrat;

class	AForm{
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
		AForm(const std::string _name, const int _grade_sign, const int _grade_exec);
		AForm(const AForm &a);
		AForm & operator = (const AForm &a);
		virtual ~AForm(void);
		int	initGrade(const int _grade);
		void				beSigned(const Bureaucrat &a);
		bool				getSign(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		virtual const std::string	getName(void) const = 0;
		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
