#include "HumanB.hpp"

HumanB::HumanB(std::string name):weapon(NULL), name(name)
{
	std::cout << "HumanB " << name <<  " contructed" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << this->name << " destroyed" << std::endl;
}

std::string	HumanB::get_name(void)
{
	return (this->name);
}

Weapon	*HumanB::get_weapon(void)
{
	return (this->weapon);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->get_name() << "attacks with their " << this->get_weapon()->getType() << std::endl;
}
