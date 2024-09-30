#include "../includes/Fixed.hpp"

int main( void ) 
{
    Fixed  const b ( Fixed( 2 ) + Fixed ( 2 ));
    


    std::cout << "b is : " << b.toInt() << std::endl;



    return 0;
}
