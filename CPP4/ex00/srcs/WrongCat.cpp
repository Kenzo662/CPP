#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat")
{
}

WrongCat::~WrongCat()
{

}

WrongCat::WrongCat( WrongCat &copy) : WrongAnimal(copy)
{
    *this = copy;
}

WrongCat & WrongCat::operator=( WrongCat const & assign)
{
    this->getType() = assign.getType();
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "MeowMeowMeow" << std::endl;
}

std::string     WrongCat::getType() const
{
    return this->type;
}