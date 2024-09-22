#include "../includes/Weapon.h"

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_guns.getType() << std::endl;
}