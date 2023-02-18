#include "global_header.h"

class	HumanB{
	public:
		HumanB();
		~HumanB();
		std::string	get_name(void);
		Weapon	get_weapon(void);
		void	attack(void);
	private:
		Weapon		weapon;
		std::string	name;
};
