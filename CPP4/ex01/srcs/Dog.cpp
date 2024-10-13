#include "../includes/Dog.hpp"

Dog::Dog() : _brain(new Brain) , type("Dog")
{
    std::cout << "Default Dog constructor call" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Default Dog constructor call" << std::endl;
    delete _brain;
}

Dog::Dog( Dog &copy) : Animal(copy) , _brain(new Brain)
{
    std::cout << "Dog copy constructor call" << std::endl;
    *this = copy;
}

Dog & Dog::operator=( Dog const & assign)
{
    std::cout << "Dog operator=" << std::endl;
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
