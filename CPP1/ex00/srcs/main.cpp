#include "../includes/Zombie.h"

int main (void)
{
    Zombie* test = newZombie("Sanji");
    delete test; 
    test = newZombie("Luffy");
    delete test; 
    test = newZombie("Zoro");
    delete test; 
    randomChump("Joe");
    randomChump("Rick");
    randomChump("Morty");
    randomChump("Katakuri");
}