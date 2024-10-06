#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50 , 20)
{
    std::cout << "ScavTrap constructor call";
    std::cout << RED << "                     ScavTrap" << RESET << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name , 100, 50, 20)
{
    std::cout << "ScavTrap name constructor call";
    std::cout << RED << "                     ScavTrap" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor call";
    std::cout << RED << "                     ScavTrap" << RESET << std::endl;
}

ScavTrap::ScavTrap( ScavTrap &copy)
{
    std::cout << "Copy constructor call";
    std::cout << RED << "                     ScavTrap" << RESET << std::endl;
    *this = copy;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & assign)
{
    this->_attackDmg = assign.getAttackdmg();
    this->_energyPoint = assign.getMana();
    this->_hitPoint = assign.getHp();
    this->_name = assign.getName();
    return *this;
}

void    ScavTrap::guardGate() const
{
    std::cout << RED << "ScavTrap is now in Gate keeper mode" << RESET << std::endl;
}