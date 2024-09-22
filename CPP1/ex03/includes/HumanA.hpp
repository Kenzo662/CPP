#ifndef __HUMANA__
#define __HUMANA__

#include "Weapon.h"

class HumanA
{
    public :

    HumanA( std::string name , Weapon& weapon ) : _name(name), _guns(weapon){}
    void    attack();

    private :

    std::string _name;
    Weapon& _guns;
};


#endif