#include "../includes/Brain.hpp"

Brain::Brain() : ideas()
{
	std::cout << "Brain constructor call" << std::endl;
}

Brain::Brain(Brain &copy)
{
	std::cout << "Brain copy constructor call" << std::endl;
	*this = copy;
}


Brain::~Brain()
{
	std::cout << "Brain destructor call" << std::endl;
}

Brain &Brain::operator=(Brain &assign)
{
	std::cout << "Brain operator=" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = assign.ideas[i];
	return (*this);
}
