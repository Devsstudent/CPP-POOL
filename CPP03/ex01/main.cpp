#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap Bob("Bob");
	ScavTrap Lea("Lea");
	ScavTrap Eli("Eli");
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
	Bob.guardGate();
	Eli.beRepaired(100);
	Eli.beRepaired(-100);
	Eli.attack("Bob");
	Bob.takeDamage(Eli.getAttackDamage());
	C.attack("Eli");
	Eli.takeDamage(C.getAttackDamage());
	Eli.attack("Bob");
	Bob.takeDamage(Eli.getAttackDamage());
}
