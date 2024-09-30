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
        Fixed & operator=(Fixed const &  assign);
        Fixed & operator<<(Fixed const &  assign);

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