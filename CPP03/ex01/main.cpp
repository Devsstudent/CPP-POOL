#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Bob("Bob");
	ClapTrap Lea("Lea");
	ClapTrap Eli("Eli");
	ClapTrap C;

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
