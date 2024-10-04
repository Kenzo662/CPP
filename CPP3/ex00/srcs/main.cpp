#include "../includes/ClapTrap.hpp"

int main (void)
{
    ClapTrap clap("Joe");

    clap.attack("Rick");
    clap.takeDamage(clap.getAttackdmg());
    std::cout << "hp : " << clap.getHp() << std::endl;
    clap.beRepaired(clap.getAttackdmg());
    std::cout << "hp : " << clap.getHp() << std::endl;

    clap.takeDamage(8);
    std::cout << "hp : " << clap.getHp() << std::endl;
    clap.beRepaired(8);
    std::cout << "hp : " << clap.getHp() << std::endl;
}