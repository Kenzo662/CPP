#include "../includes/Zombie.h"

void    Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::SetName( std::string name )
{
    this->_name = name;
}
