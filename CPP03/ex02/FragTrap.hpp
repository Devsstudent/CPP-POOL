#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: public ClapTrap{
	public :
		FragTrap(std::string name);
		FragTrap(void);
		FragTrap(const FragTrap &a);
		FragTrap& operator=(const FragTrap &a);
		~FragTrap(void);
	private:
		void	highFivesGuys(void);
};

#endif
