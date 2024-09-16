#include "../includes/Weapon.h"

std::string const Weapon::GetType() const
{
    return (this->_type);
}

void    Weapon::SetType( std::string type )
{
    this->_type = type;
}