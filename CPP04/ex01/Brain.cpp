#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor Call" << std::endl;
}

Brain::Brain(const Brain &a)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = a.ideas[i];
	std::cout << "Brain copy Constructor Call" << std::endl;
}

Brain &Brain::operator = (const Brain &a)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = a.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor Call" << std::endl;
}
