#ifndef __WEAPON__
#define __WEAPON__

#include "Weapon.h"

class Weapon
{
    public :
    Weapon( std::string type ) : _type(type){}

    std::string const & getType( void ) const;
    void    setType( std::string type );


    private :

    std::string _type;


};






#endif