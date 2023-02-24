#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " has been Constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
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

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << getName() << " has been destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (getHitPoint() <= 0)
	{
		(std::cout << "ScavTrap " << getName() << " is dead, no hit_points left .." << std::endl);
		return ;
	}
	else if (getEnergyPoint() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " has no mana" << std::endl;
		return ;
	}
	setEnergyPoint(getEnergyPoint() - 1);
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage !" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
