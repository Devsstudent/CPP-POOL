#ifnedef ICE_HPP
# define ICE_HPP

class Ice: public AMateria{
  protected:
    _name;
  public:
    Ice(std::string const &type);
    Ice(const Ice &a);
    Ice  & operator = (const Ice &a);
    ~Ice(void);
};

#endif