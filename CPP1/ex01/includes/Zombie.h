#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif