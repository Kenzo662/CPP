#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor call" << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
    _name = name;
    std::cout << "ScavTrap name constructor call" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor call" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap &copy)
{
    std::cout << "Copy constructor call" << std::endl;
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