#include "../includes/Animal.hpp"

Animal::Animal() : type("No type specified")
{
}

Animal::~Animal()
{

}

Animal::Animal( Animal &copy)
{
    *this = copy;
}

Animal & Animal::operator=( Animal const & assign)
{
    this->getType() = assign.getType();
    return *this;
}

std::string     Animal::getType() const
{
    return this->type;
}

void    Animal::makeSound() const
{
    std::cout << "The animal tries to make a noise but nothing comes out..." << std::endl;
}