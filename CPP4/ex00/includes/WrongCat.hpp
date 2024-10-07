#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{   
    public:
    
        WrongCat();
        WrongCat( WrongCat &copy );
        ~WrongCat();

        WrongCat & operator=(WrongCat const &  assign);
        void    makeSound() const;
        virtual std::string     getType() const;


    private:

    protected :
        std::string type;
};




#endif