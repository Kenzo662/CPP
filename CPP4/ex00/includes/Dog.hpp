#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{   
    public:
    
        Dog();
        Dog( Dog &copy );
        ~Dog();

        Dog & operator=(Dog const &  assign);
        virtual void    makeSound() const; 
        virtual std::string     getType() const;

    private:

    protected :
        std::string type;
};




#endif