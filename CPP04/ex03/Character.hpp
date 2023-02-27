#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class  Character: public ICharacter {
  public:
    Character(void);
    Character(const Character &a);
    Character & operator = (const Character &a);
    virtual ~Character(void);
    void  equip(AMaeria &m);
    void  unequip(int idx);
    void  use(int idx, ICharacter &target);
};

#endif
