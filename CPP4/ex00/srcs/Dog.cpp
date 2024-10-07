#include "../includes/Dog.hpp"

Dog::Dog() : type("Dog")
{
}

Dog::~Dog()
{

}

Dog::Dog( Dog &copy)
{
    *this = copy;
}

Dog & Dog::operator=( Dog const & assign)
{
    this->getType() = assign.getType();
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "WafWafWaf" << std::endl;
}

std::string     Dog::getType() const
{
    return this->type;
}