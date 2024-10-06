#ifndef __FragTrap__
#define _FragTrap__

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{   
    public:
    
        FragTrap();
        FragTrap( FragTrap &copy );
        FragTrap( std::string name );
        ~FragTrap();
        FragTrap & operator=(FragTrap const &  assign);

        void highFivesGuys(void) const;


};


#endif