#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
  materia_name = type;
  std::cout << "AMateria Constructor Called" << std::endl;
}

AMateria::AMateria(const AMateria &a)
{
  materia_name = a.materia_name;
  std::cout << "AMateria Copy Constructor Called" << std::endl;
}

AMateria  &AMateria::operator = (const AMateria &a)
{
  materia_name = a.materia_name;
  std::cout << "AMateria /overload = operator/ Called" << std::endl;
  return (*this);
}

AMateria::~AMateria(void)
{
  std::cout << "AMateria Desctructor Called" << std::endl;
}

AMateria  *AMateria::clone(void) const
{
  return (new AMateria(materia_name));
}

void  AMateria::use(ICharacter& target)
{
  
}