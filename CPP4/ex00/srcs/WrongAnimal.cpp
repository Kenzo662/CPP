#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("No type specified")
{
}

WrongAnimal::~WrongAnimal()
{

}

WrongAnimal::WrongAnimal( WrongAnimal &copy) 
{
    *this = copy;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & assign)
{
    this->getType() = assign.getType();
    return *this;
}

std::string     WrongAnimal::getType() const
{
    return this->type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "The animal tries to make a noise but nothing comes out..." << std::endl;
}