#include "../includes/Fixed.hpp"

Fixed::Fixed() : _vFix(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
}

Fixed::Fixed( Fixed const & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed & Fixed::operator=( Fixed const & assign)
{
    std::cout << "= operator called with : " << assign.getRawBits()  << std::endl;
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
    return ((float)_vFix / (float)power);
}

std::ostream & operator<<(std::ostream & o, Fixed const & v_fix)
{
    std::cout << "<< operator called with : " << v_fix.getRawBits()  << std::endl;
    o << v_fix.toFloat();
    return o;
}
Fixed   Fixed::operator+(Fixed const &  toAdd) const
{
   return Fixed(this->toFloat() + toAdd.toFloat());
}

Fixed   Fixed::operator-(Fixed const &  toSub) const
{
    return Fixed(this->toFloat() - toSub.toFloat());
}

Fixed   Fixed::operator*(Fixed const &  toMult) const
{
    return Fixed(this->toFloat() * toMult.toFloat());
}

Fixed   Fixed::operator/(Fixed const &  toDiv) const
{
    return Fixed(this->toFloat() / toDiv.toFloat());
}


bool   Fixed::operator!=(Fixed const & toComp) const
{
    return this->toFloat() != toComp.toFloat();
}

bool   Fixed::operator==(Fixed const & toComp) const
{
    return this->toFloat() == toComp.toFloat();
}

bool   Fixed::operator>(Fixed const & toComp) const
{
    return this->toFloat() > toComp.toFloat();
}

bool   Fixed::operator<(Fixed const & toComp) const
{
    return this->toFloat() < toComp.toFloat();
}

bool   Fixed::operator>=(Fixed const & toComp) const
{
    return this->toFloat() >= toComp.toFloat();
}

bool   Fixed::operator<=(Fixed const & toComp) const
{
    return this->toFloat() <= toComp.toFloat();;
}