#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap Bob("Bob");
	ScavTrap Lea("Lea");
	FragTrap Eli("Eli");
	ScavTrap C;

	C = Lea; 
	Eli.attack("Macron");
	Eli.attack("Macron");
	Eli.attack("Macron");
	Eli.attack("Macron");
	Eli.attack("Macron");
	Eli.attack("Macron");
	Eli.attack("Macron");
	Eli.attack("Macron");
	Eli.attack("Macron");
	Eli.attack("Bob");
	Bob.takeDamage(Eli.getAttackDamage());
	Eli.attack("Bob");
	Bob.takeDamage(Eli.getAttackDamage());
	Eli.beRepaired(100);
	Eli.beRepaired(-100);
	Eli.attack("Bob");
	Bob.takeDamage(Eli.getAttackDamage());
	C.attack("Eli");
	Eli.takeDamage(C.getAttackDamage());
	Eli.attack("Bob");
	Bob.takeDamage(Eli.getAttackDamage());
}
