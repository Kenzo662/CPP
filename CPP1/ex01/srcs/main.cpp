#include "../includes/Zombie.h"

int main (void)
{
    Zombie* horde = zombieHorde(3, "Rick");
    horde[0].announce();
    horde[1].announce();
    horde[2].announce();
    delete [] horde;
    horde = zombieHorde(5, "joe");
    horde[0].announce();
    horde[1].announce();



    // PRINT UN INDEX OU LE NOM NA PAS ETE SET
    horde[8].announce();


    delete [] horde;
}