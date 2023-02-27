#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class    AMateria;

class  IMateriaSource {
  protected:
      AMateria  _learned[4];
  public:
      IMateriaSource(void);
      IMateriaSource(const IMateriaSource &a);
      IMaeriaSource & operator = (const IMateriaSrouce &a);
      ~IMateriaSource(void);
      virtual ~IMateriaSource() {}
      virtual void learnMateria(AMateria*) = 0;
      virtual AMateria* createMateria(std::string const & type) = 0;
}

#endif