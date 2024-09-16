#ifndef __ZOMBIE__
#define __ZOMBIE__


#include "Zombie.h"

class Zombie

{
public:

Zombie( std::string name ) : _name(name){}
~Zombie( void )
{
  std::cout << this->_name << ": died !" << std::endl;
}


void announce( void );

private:

std::string _name;

};



#endif