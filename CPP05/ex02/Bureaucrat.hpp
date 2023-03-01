#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"

class	AForm;

class	Bureaucrat {
	private:
		std::string	name;
		unsigned int	grade;
		class GradeTooHighException: public std::exception {
			public :
				GradeTooHighException(void){}
				virtual const char * what () const throw ();
		};
		class GradeTooLowException: public std::exception {
			public:
				GradeTooLowException(void){}
				virtual const char * what () const throw ();
		};
	public:
		Bureaucrat(const std::string _name, const long _grade);
		Bureaucrat(const Bureaucrat &a);
		Bureaucrat & operator = (const Bureaucrat &a);
		~Bureaucrat(void);
		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void			setGrade(const long _grade);
		void			downGrade(void);
		void			upGrade(void);
		void			signForm(AForm &a);
};

std::ostream& operator << (std::ostream& os, const Bureaucrat& a);

#endif
