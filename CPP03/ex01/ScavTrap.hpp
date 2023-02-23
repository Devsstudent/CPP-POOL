#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap{
	public :
		ScavTrap(std::string name);
		ScavTrap(void);
		ScavTrap(const ScavTrap &a);
		ScavTrap& operator = (const ScavTrap &a);
		~ScavTrap(void);
		void	attack(const std::string &target);
	private:
		void	guardGate(void);
};

#endif
