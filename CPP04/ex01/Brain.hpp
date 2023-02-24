#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain {
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(const Brain &a);
		Brain & operator = (const Brain &a);
		~Brain(void);
};

void	copyy(std::string a[100], std::string b[100]);

#endif
