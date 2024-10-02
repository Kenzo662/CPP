#ifndef __Fixed__
#define _Fixed__

#include <iostream>
#include <cmath>

class Fixed
{   
    public:
    
        Fixed();
        Fixed( Fixed const & copy );
        Fixed( int const integer);
        Fixed( float const fl);
        ~Fixed();

        static Fixed   min(Fixed &n1 , Fixed &n2);
        static Fixed   min(Fixed const &n1 , Fixed const &n2);
        static Fixed   max(Fixed &n1 , Fixed &n2);
        static Fixed   max(Fixed const &n1 , Fixed const &n2);

        Fixed & operator=(Fixed const &  assign);
        Fixed   operator+(Fixed const &  toAdd) const;
        Fixed   operator-(Fixed const &  toSub) const;
        Fixed   operator*(Fixed const &  toMult) const;
        Fixed   operator/(Fixed const &  toDiv) const;

        Fixed & operator++();
        Fixed   operator++(int);
        Fixed & operator--();
        Fixed   operator--(int);

        bool   operator==(Fixed const &  toComp) const;
        bool   operator!=(Fixed const &  toComp) const;
        bool   operator<(Fixed const &  toComp) const;
        bool   operator>(Fixed const &  toComp) const;
        bool   operator<=(Fixed const &  toComp) const;
        bool   operator>=(Fixed const &  toComp) const;
        


        int     getRawBits( void ) const;
        int     toInt( void ) const;
        float   toFloat( void ) const;
        void    setRawBits( int const raw );




    private:

        int _vFix;
        static const int _fBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & v_fix);



#endif