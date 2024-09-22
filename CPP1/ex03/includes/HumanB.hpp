#ifndef __HUMANB__
#define __HUMANB__

#include "Weapon.h"

class HumanB
{
    public :
    HumanB( std::string name ) : _name(name){}
    void    attack();
    void    setWeapon(Weapon& guns);

    private :

    std::string _name;
    Weapon *_guns;
};


#endif