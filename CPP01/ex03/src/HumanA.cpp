#include "gloabl_header.h"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
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

Weapon	HumanA::get_weapon(void)
{
	return (this->weapon);
}
