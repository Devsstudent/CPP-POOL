#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class	Bureaucrat: {
	private:
		const std::string	name;
		unsigned int	grade;
		class GradeTooHighException: public std::exception {
			
		};
		class GradeTooLowException: public std::exception {
			
		};
	public:
		Bureaucrat(const std::string _name, unsigned int _grade);
		Bureaucrat(const Bureaucrat &a);
		Bureaucrat & operator = (const Bureaucrat &a);
		~Bureaucrat(void);
		std::string		getName(void);
		unsigned int	getGrade(void);
		Bureaucrat & operator << (const Bureaucrat &a);
};

#endif
