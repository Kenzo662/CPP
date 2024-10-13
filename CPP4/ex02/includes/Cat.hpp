#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{   
    public:
    
        Cat();
        Cat( Cat &copy );
        virtual ~Cat();

        Cat & operator=(Cat const &  assign);
        virtual void    makeSound() const;
        virtual std::string     getType() const;



    private:
        Brain * _brain;

    protected :
        std::string type;
};




#endif