#include "../includes/Cat.hpp"

Cat::Cat() : type("Cat")
{
}

Cat::~Cat()
{

}

Cat::Cat( Cat &copy)
{
    *this = copy;
}

Cat & Cat::operator=( Cat const & assign)
{
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