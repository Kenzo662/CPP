#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main() 
{
    // Tentative d'instancier AAnimal (ceci ne fonctionnera pas)
    // AAnimal animal;  // Cela générera une erreur de compilation

    Dog dog;
    Cat cat;

    dog.makeSound();
    cat.makeSound(); 

    std::cout << "Type of dog: " << dog.getType() << std::endl;
    std::cout << "Type of cat: " << cat.getType() << std::endl;
	
}