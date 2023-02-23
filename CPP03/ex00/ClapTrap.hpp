#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class    ClapTrap{
    private :
      std::string  name;
      int          hit_point;
      int          energy_point;
      int          attack_damage;
    public :
      ClapTrap(void);
      ClapTrap(std::string name);
      ClapTrap(const ClapTrap &a);
      ~ClapTrap(void);
      ClapTrap & operator = (const ClapTrap &a);
		int		getAttackDamage(void);
		int		getEnergyPoint(void);
		int		getHitPoint(void);
		std::string	getName(void);
		void	setAttackDamage(int value);
		void	setName(std::string newName);
		void	setEnergyPoint(int value);
		void	setHitPoint(int value);
      void  attack(const std::string& target);
      void  takeDamage(unsigned int amount);
      void  beRepaired(unsigned int amount);
};

#endif
