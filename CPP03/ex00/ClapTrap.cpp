#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("Anonymous"), hit_point(10), energy_point(10), attack_damage(10)
{
  std::cout << "ClapTrap " << name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name) , hit_point(10), energy_point(10), attack_damage(10)
{
  std::cout << "ClapTrap " << name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
  name = a.name;
  hit_point = a.hit_point;
  energy_point = a.energy_point;
  attack_damage = a.attack_damage;
  std::cout << "ClapTrap " << name << " has been constructed by copy" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
  std::cout << "ClapTrap " << name << " has been destroyed" << std::endl;
}

ClapTrap  &ClapTrap::operator = (const ClapTrap &a)
{
  name = a.name;
  hit_point = a.hit_point;
  energy_point = a.energy_point;
  attack_damage = a.attack_damage;
  std::cout << "Copy assignement operator called" << std::endl;
  return (*this);
}

std::string ClapTrap::getName(void) const
{
	return (name);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (attack_damage);
}

int	ClapTrap::getEnergyPoint(void) const
{
	return (energy_point);
}

int	ClapTrap::getHitPoint(void) const
{
	return (hit_point);
}

void	ClapTrap::setName(std::string newName)
{
	name = newName;
}

void	ClapTrap::setAttackDamage(int value)
{
	attack_damage = value;
}

void	ClapTrap::setEnergyPoint(int value)
{
	energy_point = value;
}

void	ClapTrap::setHitPoint(int value)
{
	hit_point = value;
}

void  ClapTrap::attack(const std::string &target)
{
 	if (hit_point <= 0)
	{
		std::cout << "ClapTrap " << name << " is dead, no hit_points left .." << std::endl;
		return ;
	}
  else if (energy_point <= 0)
  {
    std::cout << name << " cannot attack, no mana" << std::endl;
    return ;
  }
  energy_point--;
  std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(int amount)
{
  if (amount < 0)
      std::cout << "ClapTrap " << name << " cannot take negative amount of damage" << std::endl;
	std::cout << "ClapTrap " << name << " take " << amount << " damages" << std::endl;
  hit_point -= amount;
}

void  ClapTrap::beRepaired(long amount)
{
  if (amount < 0)
  {
    std::cout << "ClapTrap " << name << " cannot repair cause wrong amount entred" << std::endl;
    return ;
  }
  if (energy_point <= 0)
  {
    std::cout << name << " cannot attack, no mana" << std::endl;
    return ;
  }
 	else if (hit_point <= 0)
	{
		std::cout << name << " is dead, not hit_points left .." << std::endl;
		return ;
	}
  energy_point--;
  std::cout << "ClapTrap " << name << " repaired " << amount << " hit_points" << std::endl;
  hit_point += amount;
}
