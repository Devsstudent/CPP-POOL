#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " has been Constructed" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " has been Constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &a)
{
	setName(a.getName());
	setHitPoint(a.getHitPoint());
	setEnergyPoint(a.getEnergyPoint());
	setAttackDamage(a.getAttackDamage());
	std::cout << "FragTrap " << getName() << " has been Constructed by copy" << std::endl;
}

FragTrap	&FragTrap::operator = (const FragTrap &a)
{
	setName(a.getName());
	setHitPoint(a.getHitPoint());
	setEnergyPoint(a.getEnergyPoint());
	setAttackDamage(a.getAttackDamage());
	std::cout << "Copy operator = called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << getName() << " has been destroyed" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap" << getName() << " proposing you a high fives :) ! You must accept it" << 
}
