#include "../includes/AAnimal.hpp"

AAnimal::AAnimal() : type("No type specified")
{
    std::cout << "Default AAnimal constructor call" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Default AAnimal destructor call" << std::endl;
}

AAnimal::AAnimal( AAnimal &copy)
{
    std::cout << "Animal copy constructor call" << std::endl;
    *this = copy;
}

AAnimal & AAnimal::operator=( AAnimal const & assign)
{
    this->getType() = assign.getType();
    return *this;
}

std::string     AAnimal::getType() const
{
    return this->type;
}

