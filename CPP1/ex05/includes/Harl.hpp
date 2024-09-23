#ifndef __HARL__
#define __HARL__

#include <iostream>

class Harl 
{
    public :

        void complain( std::string level );



    private :

        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

};





#endif