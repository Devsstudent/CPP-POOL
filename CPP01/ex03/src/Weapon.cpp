#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "A weapon as been contructed" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "A weapon as been destroyed" << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string	Weapon::getType(void)
{
	return (this->type);
}

void	attack(void)
{
	std::cout << this.get_name() << "attacks with their " << this.get_weapon().type << std::endl;
}
