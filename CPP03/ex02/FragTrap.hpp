#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: public virtual ClapTrap{
	public :
		FragTrap(const std::string _name);
		FragTrap(void);
		FragTrap(const FragTrap &a);
		FragTrap& operator=(const FragTrap &a);
		~FragTrap(void);
	private:
		void	highFivesGuys(void);
};

#endif
