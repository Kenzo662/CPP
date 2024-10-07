#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

class Cat : public Animal
{   
    public:
    
        Cat();
        Cat( Cat &copy );
        ~Cat();

        Cat & operator=(Cat const &  assign);
        virtual void    makeSound() const;
        virtual std::string     getType() const;


    private:

    protected :
        std::string type;
};




#endif