#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "A zombie as been contructed" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " Destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name( std::string name )
{
	this->name = name;
}

Zombie*	newZombie( std::string name )
{
	Zombie	*new_zombie;

	new_zombie = new Zombie;
	new_zombie->set_name(name);
	return (new_zombie);
}

void	randomChump( std::string name )
{
	Zombie	randomChump;

	randomChump.set_name(name);
	randomChump.announce();
}
