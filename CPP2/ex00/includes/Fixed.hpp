#ifndef __Fixed__
#define _Fixed__

#include <iostream>

class Fixed
{   
    public:
    
        Fixed();
        Fixed( Fixed const & copy );
        ~Fixed();
        Fixed & operator=(Fixed const &  assign);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
   




    private:

        int _nb;
        static const int _f_bits = 8;
};




#endif