#include "../includes/ScavTrap.hpp"

int main(void)
{
    ClapTrap joe("Joe");
    ScavTrap rick("Rick");
    
    joe.attack("Rick");
    rick.takeDamage(joe.getAttackdmg());
    std::cout << "Energy de Joe : " << joe.getMana() << std::endl;
    std::cout << "Vie de Rick : " << rick.getHp() << std::endl;

}