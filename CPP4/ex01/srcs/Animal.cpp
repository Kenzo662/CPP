#include "../includes/Animal.hpp"

Animal::Animal() : type("No type specified")
{
    std::cout << "Default Animal constructor call" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default Animal destructor call" << std::endl;
}

Animal::Animal( Animal &copy)
{
    std::cout << "Animal copy constructor call" << std::endl;
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
