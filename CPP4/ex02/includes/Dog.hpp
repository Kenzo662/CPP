#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{   
    public:
    
        Dog();
        Dog( Dog &copy );
        virtual ~Dog();

        Dog & operator=(Dog const &  assign);
        virtual void    makeSound() const; 
        virtual std::string     getType() const;

    private:
        Brain * _brain;

    protected :
        std::string type;
};




#endif