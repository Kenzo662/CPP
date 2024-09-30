#include "../includes/Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed & Fixed::operator=( Fixed const & assign)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = assign.getRawBits();
    return *this;
}

int Fixed::getRawBits( ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_nb;
}

void    Fixed::setRawBits(  int const raw )
{
    this->_nb = raw;
}
