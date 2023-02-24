#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class  DiamondTrap: public FragTrap, public ScavTrap{
    private:
      std::string  name;
      void  whoAmI(void);
    public:
      DiamondTrap(void);
      DiamondTrap(const std::string _name);
      DiamondTrap(const DiamondTrap &a);
      DiamondTrap& operator = (const DiamondTrap &a);
      ~DiamondTrap(void);
};

#endif