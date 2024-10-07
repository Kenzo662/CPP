#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"


int main(void)
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); 
    dog->makeSound();
    meta->makeSound();

    std::cout << "\n\n\n";
    
    const WrongAnimal* wAnimal = new WrongAnimal();
    const Animal* dog1 = new Dog();
    const WrongAnimal* wCat = new WrongCat();

    std::cout << dog1->getType() << " " << std::endl;
    std::cout << wCat->getType() << " " << std::endl;
    wCat->makeSound(); 
    dog1->makeSound();
    wAnimal->makeSound();

    delete meta;
    delete dog;
    delete cat;
    delete wAnimal;
    delete dog1;
    delete wCat;
}