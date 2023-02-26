#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

class  Cure: public AMateria {
  protected:
    _name;
  public:
    Cure(std::string  const &type);
    Cure(const Cure &a);
    Cure & operator = (const Cure &a);
    ~Cure(void);
};

#endif