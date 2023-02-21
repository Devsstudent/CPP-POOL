#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon), name(name)
{
	std::cout << "HumanA " << name <<  " contructed" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}

std::string	HumanA::get_name(void)
{
	return (this->name);
}

Weapon	&HumanA::get_weapon(void)
{
	return (this->weapon);
}

void	HumanA::attack(void)
{
	std::cout << this->get_name() << "attacks with their " << this->get_weapon().getType() << std::endl;
}
