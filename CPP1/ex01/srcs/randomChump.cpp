#include "../includes/Zombie.h"

void randomChump( std::string name )
{
    Zombie zombie;
    zombie.SetName(name);
    zombie.announce();
}