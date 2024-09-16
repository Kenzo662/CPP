#include "../includes/Zombie.h"

Zombie* newZombie( std::string name )
{
    Zombie* newZombie = new Zombie;
    newZombie->SetName(name);
    return (newZombie);
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        horde[i].SetName(name);
    return (horde);
}