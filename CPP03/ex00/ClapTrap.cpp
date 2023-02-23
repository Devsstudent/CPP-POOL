#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("Anonymous"), hit_point(10), energy_point(10), attack_damage(10)
{
  std::cout << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name) , hit_point(10), energy_point(10), attack_damage(10)
{
  std::cout << name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
  name = a.name;
  hit_point = a.hit_point;
  energy_point = a.energy_point;
  attack_damage = a.attack_damage;
}

ClapTrap::~ClapTrap(void)
{
  std::cout << name << " has been destroyed" << std::endl;
}

ClapTrap  &ClapTrap::operator = (const ClapTrap &a)
{
  name = a.name;
  hit_point = a.hit_point;
  energy_point = a.energy_point;
  attack_damage = a.attack_damage;
  return (*this);
}

void  ClapTrap::attack(const std::string &target)
{
  if (energy_point <= 0)
  {
    std::cout << name << " cannot attack, no mana" << std::endl;
    return ;
  }
  energy_point--;
  std::cout << "ClapTrap " << name << " attacks" << target.name;
  target.takeDamage(attack_damage);
}

void ClapTrap::takeDamage(unsigned int amount)
{
 ", causing " << amount << " points of damage !" << std::endl;
  target.hit_point -= amount;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  if (energy_point <= 0)
  {
    std::cout << name << " cannot attack, no mana" << std::endl;
    return ;
  }
  energy_point--;
  std::cout << "ClapTrap " << name << " repaired " << amount << " hit_points" << std::endl;
  hit_points += amount;
}