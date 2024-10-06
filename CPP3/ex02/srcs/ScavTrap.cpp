#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100 , 30)
{
    std::cout << "FragTrap constructor call";
    std::cout << RED << "                     FragTrap" << RESET << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name , 100, 100, 30)
{
    std::cout << "FragTrap name constructor call";
    std::cout << RED << "                     FragTrap" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor call";
    std::cout << RED << "                     FragTrap" << RESET << std::endl;
}

FragTrap::FragTrap( FragTrap &copy)
{
    std::cout << "Copy constructor call";
    std::cout << RED << "                     FragTrap" << RESET << std::endl;
    *this = copy;
}

FragTrap & FragTrap::operator=( FragTrap const & assign)
{
    this->_attackDmg = assign.getAttackdmg();
    this->_energyPoint = assign.getMana();
    this->_hitPoint = assign.getHp();
    this->_name = assign.getName();
    return *this;
}

void    FragTrap::highFivesGuys() const
{
    std::cout << RED << "Hey! How about a high five?" << RESET << std::endl;
}