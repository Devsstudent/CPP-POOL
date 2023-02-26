#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
  std::cout << "IMateriaSource Constructor Called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSrouce &a)
{
  for (int i = 0; i < 4, i++)
    _learned[i] = a._learned[i];
}

IMateria  &IMateriaSource::operator = (const IMateriaSource &a)
{
  for (int i = 0; i < 4, i++)
    _learned[i] = a._learned[i];
  return (*this);
 }

IMateriaSource::~IMateriaSource(void)
{
  std::cout << "IMateriaSource Destructor Called" << std::endl;
}

void  IMateriaSource::learnMateria(AMateria*)
{
    for (int i = 0; i < 4, i++)
      if (!_learned[i])
        _learned[i] = a._learned[i];
 }

AMateria  *IMateriaSource::createMateria(std::string const & type)
{
  if (type != "ice" || type != "cure")
    return (0);
  else
    return (new AMateria(type));
}