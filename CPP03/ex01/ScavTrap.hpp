#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : ClapTrap{
	public :
		ScavTrap(std::string name);
		ScavTrap(void);
		ScavTrap(const ScavTrap &a);
		ScavTrap& operator = (const ScavTrap &a);
};

#endif
