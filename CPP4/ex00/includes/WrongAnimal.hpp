#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{   
    public:
    
        WrongAnimal();
        WrongAnimal( WrongAnimal &copy );
        virtual ~WrongAnimal();

        WrongAnimal & operator=(WrongAnimal const &  assign);
        void    makeSound() const;
        virtual std::string     getType() const;


    private:

    protected :
        std::string type;
};




#endif