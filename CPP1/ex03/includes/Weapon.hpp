#ifndef __WEAPON__
#define __WEAPON__

#include "Weapon.h"

class Weapon
{
    public :

    std::string const GetType( void ) const;
    void    SetType( std::string type );


    private :

    std::string _type;


};






#endif