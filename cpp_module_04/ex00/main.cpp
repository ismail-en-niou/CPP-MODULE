#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << "\n\n~~~~~~~~~~~~~~~~~~~~~ SECOND TEST WRONG ~~~~~~~~~~~~~~~~~~~\n\n" << std::endl;
    const WrongAnimal *meta2 = new WrongAnimal();
    const WrongAnimal *a = new WrongCat();
    std::cout << a->getType() << " " << std::endl;
    a->makeSound();
    meta2->makeSound();
    std::cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~ END OF TESTS ~~~~~~~~~~~~~~~~~~~~~~\n\n" << std::endl;
    delete meta;
    delete meta2;
    delete a;
    delete j;
    delete i;
    return 0;
}