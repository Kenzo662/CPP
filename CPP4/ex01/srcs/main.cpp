#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"


int main(void) 
{
    Animal* animals[4];

    for (int i = 0; i < 2; i++) 
        animals[i] = new Dog();
    for (int i = 2; i < 4; i++) 
        animals[i] = new Cat();
 
    for (int i = 0; i < 4; i++) 
	{
        std::cout << "My type is : " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }

    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }
}