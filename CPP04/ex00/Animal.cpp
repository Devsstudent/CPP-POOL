#include "Animal.hpp"

Animal::Animal(void) : type("None")
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(const Animal &a)
{
	type = a.type;
	std::cout << "Animal copy Constructor Called" << std::endl;
}

Animal &Animal::operator = (const Animal &a)
{
	type = a.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor Called" << std::endl;
}

void	Animal::makeSound(void) const
{
	if (type == "Cat")
		std::cout << "Miaouu.." << std::endl;
	else if (type == "Dog")
		std::cout << "Ouaaaf.." << std::endl;
}

void	Animal::setType(std::string _type)
{
	type = _type;
}

std::string	Animal::getType(void) const
{
	return (type);
}
