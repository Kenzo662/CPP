#include "../includes/Fixed.hpp"

Fixed::Fixed() : _vFix(0)
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
    this->_vFix = assign.getRawBits();
    return *this;
}

int Fixed::getRawBits( ) const
{
    return this->_vFix;
}

void    Fixed::setRawBits(  int const raw )
{
    this->_vFix = raw;
}

Fixed::Fixed( int integer )
{
    std::cout << "Int constructor called" << std::endl;
    _vFix = integer << _fBits;
}

Fixed::Fixed( float fl )
{
    std::cout << "Float constructor called" << std::endl;
    int power = 1 << _fBits;
    _vFix = roundf(fl * power);
}

int Fixed::toInt( ) const
{
    return this->_vFix >> _fBits;
}

float   Fixed::toFloat( ) const
{
    int power = 1 << _fBits;
    return ((float)_vFix / power);
}

std::ostream & operator<<(std::ostream & o, Fixed const & v_fix)
{
    o << v_fix.toFloat();
    return o;
}
