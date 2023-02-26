#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int  main(void)
{
  const  Animal* i = new Dog();
  const  Animal* j = new Cat();
  Cat    a1;
  Cat    a2(a1);

  j->makeSound();
  i->makeSound();

  delete  j;
  delete  i;
}