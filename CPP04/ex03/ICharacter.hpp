#ifndef ICharacter_HPP
# define ICharacter_HPP


# include "AMateria.hpp"
# include <iostream>

class  AMateria;

class  ICharacter
{
  protected:
    const  std::string _name;
    AMateria           *iventory;
  public:
    ICharacter(const std::string &name);
    ICharacter(const ICharacter &a);
    ICharacter & operator = (const ICharacter &a);
    virtual ~ICharacter() {}
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria& m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif