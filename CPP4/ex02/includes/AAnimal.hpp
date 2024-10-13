#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{   
    public:
    
        AAnimal();
        AAnimal( AAnimal &copy );
        virtual ~AAnimal();

        AAnimal & operator=(AAnimal const &  assign);
        virtual void    makeSound() const = 0;
        virtual std::string     getType() const;


    private:

    protected :
        std::string type;
};




#endif