#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor Call" << std::endl;
}

Brain::Brain(const Brain &a)
{
	copyy(ideas, &a.ideas);
	std::cout << "Brain copy Constructor Call" << std::endl;
}

Brain &Brain::operator = (const Brain &a)
{
	copyy(ideas, a.ideas);
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor Call" << std::endl;
}
