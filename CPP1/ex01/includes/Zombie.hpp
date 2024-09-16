#ifndef __ZOMBIE__
#define __ZOMBIE__


#include "Zombie.h"

class Zombie

{
public:

Zombie( )
{

}
~Zombie( void )
{
  std::cout << this->_name << ": died !" << std::endl;
}


void announce( void );
void    SetName( std::string name);

private:

std::string _name;

};



#endif