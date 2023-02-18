#include "global_header.h"

class	HumanA{
	public:
		HumanA(Weapon weapon);
		~HumanA();
		std::string	get_name(void);
		Weapon	get_weapon(void);
		void	attack(void);
	private:
		Weapon		weapon;
		std::string	name;
};
