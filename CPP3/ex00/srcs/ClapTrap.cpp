#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoint(10), _energyPoint(10), _attackDmg(0)
{
    std::cout << "Default constructor call" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name) , _hitPoint(10), _energyPoint(10), _attackDmg(0)
{
    std::cout << "Name constructor call" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor call" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap &copy)
{
    std::cout << "Copy constructor call" << std::endl;
    *this = copy;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & assign)
{
    this->_attackDmg = assign.getAttackdmg();
    this->_energyPoint = assign.getMana();
    this->_hitPoint = assign.getHp();
    this->_name = assign.getName();
    return *this;
}

void    ClapTrap::attack( const std::string& target)
{
     if (this->_energyPoint > 0)
     {
        std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
        this->_energyPoint--;
     }
     else
        std::cout << "No more energy point available !" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount)
{
    if (this->_hitPoint > amount)
        this->_hitPoint -= amount;
    else
        this->_hitPoint = 0;
    std::cout << this->_name << " lose " << amount << " life point!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount)
{
    if (this->_energyPoint > 0)
    {
        this->_hitPoint += amount;
        this->_energyPoint--;
        std::cout << this->_name << " recover " << amount << " life point!" << std::endl;
    }
    else
        std::cout << "No more energy point available !" << std::endl;
} 

// Getters :

std::string ClapTrap::getName() const
{
    return this->_name;
}

int ClapTrap::getHp() const
{
    return this->_hitPoint;
}

int ClapTrap::getMana() const
{
    return this->_energyPoint;
}

int ClapTrap::getAttackdmg() const
{
    return this->_attackDmg;
}