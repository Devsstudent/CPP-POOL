#include "global_header.h"

class	Weapon{
	public :
		Weapon(std::string type);
		~Weapon();
		std::string	getType(void);
	private :
		void setType(std::string type);
		std::string	type;
};
