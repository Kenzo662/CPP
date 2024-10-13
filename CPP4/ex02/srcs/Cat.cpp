#include "../includes/Cat.hpp"

Cat::Cat() : _brain(new Brain) , type("Cat")
{
    std::cout << "Default Cat constructor call" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Default Cat destructor call" << std::endl;
    delete _brain;
}

Cat::Cat( Cat &copy) : AAnimal(copy) , _brain(new Brain)
{
    std::cout << "Cat copy constructor call" << std::endl;
    *this = copy;
}

Cat & Cat::operator=( Cat const & assign)
{
    std::cout << "Cat operator=" << std::endl;
    this->getType() = assign.getType();
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "MeowMeowMeow" << std::endl;
}

std::string     Cat::getType() const
{
    return this->type;
}