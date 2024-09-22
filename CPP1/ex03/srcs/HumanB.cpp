#include "../includes/Weapon.h"

void    HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << _guns->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& guns)
{
    this->_guns = &guns;
}