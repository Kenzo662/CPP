#include "../includes/FragTrap.hpp"

int main(void)
{
    ClapTrap joe("Joe");
    FragTrap rick("Rick");
    FragTrap kenz("Kenz");

    std::cout << "CLAPTRAP : \n";
    std::cout << "Name : " << joe.getName() << "\n";
    std::cout << "Hp : " << joe.getHp() << "\n";
    std::cout << "Energy : " << joe.getMana() << "\n";
    std::cout << "ATK : " << joe.getAttackdmg() << "\n\n\n";

    std::cout << "FragTrap : \n";
    std::cout << "Name : " << rick.getName() << "\n";
    std::cout << "Hp : " << rick.getHp() << "\n";
    std::cout << "Energy : " << rick.getMana() << "\n";
    std::cout << "ATK : " << rick.getAttackdmg() << "\n\n\n";
    
    joe.attack("Rick");
    rick.takeDamage(joe.getAttackdmg());
    std::cout << "Energy de Joe : " << joe.getMana() << "\n";
    std::cout << "Vie de Rick : " << rick.getHp() << "\n\n\n";


    rick.attack("Joe");
    joe.takeDamage(rick.getAttackdmg());
    std::cout << "Energy de Rick : " << rick.getMana() << "\n";
    std::cout << "Vie de Joe : " << joe.getHp() << std::endl;

    rick.highFivesGuys();


    rick.attack("Kenz");
    kenz.takeDamage(rick.getAttackdmg());
    std::cout << "Energy de Rick : " << rick.getMana() << "\n";
    std::cout << "Vie de Kenz : " << kenz.getHp() << std::endl;

}