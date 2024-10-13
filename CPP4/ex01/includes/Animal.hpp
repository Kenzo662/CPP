#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{   
    public:
    
        Animal();
        Animal( Animal &copy );
        virtual ~Animal();

        Animal & operator=(Animal const &  assign);
        virtual void    makeSound() const;
        virtual std::string     getType() const;


    private:

    protected :
        std::string type;
};




#endif