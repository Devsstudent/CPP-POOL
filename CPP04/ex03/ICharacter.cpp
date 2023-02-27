#include "ICharacter.hpp"

ICharacter::ICharacter(const std::string &name)
{
  _name = name;
  inventory = new AMateria[4];
  std::cout << "ICharacter Constructor Called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &a)
{
  _name = a.name;
  inventory = new AMateria[4];
  for (int i = 0; i < 4; i++)
    iventory[i].materia_name = a.inventory[i].materia_name;
}

ICharacter &ICharacter::operator = (const ICharacter &a)
{
  _name = name;
  for (int i = 0; i < 4; i++)
    iventory[i] = a.inventory[i];
  return (*this);
}

std::string const &ICharacter::getName(void) const
{
    const  std::string  &ref_name = _name;
    return (ref_name);
}

void  ICharacter::equip(AMatertia& m)
{
  for (int i = 0; i < 4; i++)
    if (inventory[i] == NULL)
    {
      inventory[i] = m;
      break ;
    }
}

void  ICharacter::unequip(int idx)
{
  inventory[idx] = NULL;
}

void  ICharacter::use(int idx, ICharacter& target)
{
  if (!inventory[idx])
    return ;
  inventory[idx].use(target);
}