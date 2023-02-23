#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	setName("Anonymous");
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " has been Constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	setName(name);
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " has been Constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a)
{
	setName(a.getName());
	setHitPoint(a.getHitPoint());
	setEnergyPoint(a.getEnergyPoint());
	setAttackDamage(a.getAttackDamage());
	std::cout << "ScavTrap " << getName() << " has been Constructed by copy" << std::endl;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &a)
{
	setName(a.getName());
	setHitPoint(a.getHitPoint());
	setEnergyPoint(a.getEnergyPoint());
	setAttackDamage(a.getAttackDamage());
	std::cout << "Copy operator = called" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
