#include "../includes/Fixed.hpp"

Fixed::Fixed() : _vFix(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed( Fixed const & copy)
{
    *this = copy;
}

Fixed & Fixed::operator=( Fixed const & assign)
{
    //std::cout << "= operator called with : " << assign.getRawBits()  << std::endl;
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
    _vFix = integer << _fBits;
}

Fixed::Fixed( float fl )
{
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
   // std::cout << "<< operator called with : " << v_fix.getRawBits()  << std::endl;
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
    return this->_vFix != toComp._vFix;
}

bool   Fixed::operator==(Fixed const & toComp) const
{
    return this->_vFix == toComp._vFix;
}

bool   Fixed::operator>(Fixed const & toComp) const
{
    return this->_vFix > toComp._vFix;
}

bool   Fixed::operator<(Fixed const & toComp) const
{
    return this->_vFix < toComp._vFix;
}

bool   Fixed::operator>=(Fixed const & toComp) const
{
    return this->_vFix >= toComp._vFix;
}

bool   Fixed::operator<=(Fixed const & toComp) const
{
    return this->_vFix <= toComp._vFix;
}

Fixed & Fixed::operator++()
{
    ++this->_vFix ;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_vFix++;
    return tmp;
}

Fixed & Fixed::operator--()
{
    --this->_vFix;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_vFix--;
    return tmp;
}

Fixed  Fixed::min(Fixed &n1 , Fixed &n2)
{
    if (n1 == n2)
        std::cout << "Les deux nombres sont égaux." << std::endl;
    if (n1 > n2)
        return n2;
    return n1;
}

Fixed  Fixed::min(Fixed const &n1 , Fixed const &n2)
{
    if (n1 == n2)
        std::cout << "Les deux nombres sont égaux." << std::endl;
    if (n1 > n2)
        return n2;
    return n1;
}

Fixed  Fixed::max(Fixed &n1 , Fixed &n2)
{
    if (n1 == n2)
        std::cout << "Les deux nombres sont égaux." << std::endl;
    if (n1 < n2)
        return n2;
    return n1;
}

Fixed  Fixed::max(Fixed const &n1 , Fixed const &n2)
{
    if (n1 == n2)
        std::cout << "Les deux nombres sont égaux." << std::endl;
    if (n1 < n2)
        return n2;
    return n1;
}