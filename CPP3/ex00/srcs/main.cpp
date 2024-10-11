#include "../includes/ClapTrap.hpp"

int main (void)
{
    ClapTrap joe("Joe");
    ClapTrap rick("Rick");

    std::cout << "Joe stats : \n";
    std::cout << "HP : " << joe.getHp() << "\n";
    std::cout << "Energy : " << joe.getMana() << "\n";
    std::cout << "AtkDmg : " << joe.getAttackdmg() << "\n";

    std::cout << "Rick stats : \n";
    std::cout << "HP : " << rick.getHp() << "\n";
    std::cout << "Energy : " << rick.getMana() << "\n";
    std::cout << "AtkDmg : " << rick.getAttackdmg() << "\n";

    std::cout << "----------------------------------------------\n";
    joe.attack("Rick");
    std::cout << joe.getMana() << "\n";
    rick.takeDamage(joe.getAttackdmg());
    std::cout << rick.getHp() << std::endl;
}