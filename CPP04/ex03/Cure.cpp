#include "Cure.hpp"

Cure::Cure(std::string const &type)
{
  _name = type;
}

Cure::Cure(const Cure &a)
{
  _name = a._name;
}

Cure  &Cure::operator = (const Cure &a)
{
  _name = a.name;
  return (*this);
}

Cure::~Cure(void)
{
  std::cout << "Cure Destrucor Called" << std::endl;
}

void  Cure::use(ICharacter& target)
{
  std::cout << "* healds " << targer._name << "'s wounds *" << std::endl;
}