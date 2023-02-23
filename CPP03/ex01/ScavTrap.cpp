#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	setName("Anonymous");
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	std::cout << getName() << " has been Constructed" << std::endl;
}
