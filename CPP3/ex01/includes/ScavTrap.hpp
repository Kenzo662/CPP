#ifndef __ScavTrap__
#define _ScavTrap__

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{   
    public:
    
        ScavTrap();
        ScavTrap( ScavTrap &copy );
        ScavTrap( std::string name );
        ~ScavTrap();
        ScavTrap & operator=(ScavTrap const &  assign);

        void guardGate() const;


};


#endif