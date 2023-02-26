#include "Ice.hpp"


Ice::Ice(std::string const &type)
{
  _name = type;
}

Ice::Ice(const Ice &a)
{
  _name = a._name;
}

Ice  &Ice::operator = (const Ice &a)
{
  _name = a.name;
  return (*this);
}

Ice::~Ice(void)
{
  std::cout << "Cure Destrucor Called" << std::endl;
}

void  Ice::use(ICharacter& target)
{
  std::cout << "* shoots an ice bolt at " << target._name << " *" << std::endl;
}