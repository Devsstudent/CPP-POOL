#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): FragTrap(), ScavTrap()
{
  name = "Anonymous";
  ClapTrap::name = name + "_clap_name";
  FragTrap::hit_point = 100;
  ScavTrap::energy_point = 50;
  FragTrap::attack_damage = 30;
  std::cout << "DiamondTrap " << name << " constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string _name): FragTrap(_name), ScavTrap(_name)
{
  name = _name;
  ClapTrap::name = name + "_clap_name";
  FragTrap::hit_point = 100;
  ScavTrap::energy_point = 50;
  FragTrap::attack_damage = 30;
  std::cout << "DiamondTrap " << name << " constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &a)
{
  name = a.getName();
  ClapTrap::name = name + "_clap_name";
  FragTrap::hit_point = FragTrap::getHitPoint();
  ScavTrap::energy_point = ScavTrap::getEnergyPoint();
  FragTrap::attack_damage = FragTrap::getAttackDamage();
  std::cout << "DiamondTrap " << name << " copy Constructor called" << std::endl;
}

DiamondTrap&  DiamondTrap::operator = (const DiamondTrap &a)
{
  name = a.getName();
  ClapTrap::name = name + "_clap_name";
  FragTrap::hit_point = FragTrap::getHitPoint();
  ScavTrap::energy_point = ScavTrap::getEnergyPoint();
  FragTrap::attack_damage = FragTrap::getAttackDamage();
  std::cout << "Overload operator = of DiamondTrap called" << std::endl;
  return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
  std::cout << "DiamondTrap " << name << " has been destroyed" << std::endl;
}

void  DiamondTrap::whoAmI(void)
{
  std::cout << "DiamondTrap name is : " << name << " and his ClapTrap name his : " << ClapTrap::name << std::endl;
}