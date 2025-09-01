#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
    type = "cat";
    std::cout << "Cat default constructor called " << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat this copy constructor called " << std::endl;
    brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        type = copy.type;
        delete brain;
        brain = new Brain(*copy.brain);
    }
    return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow! Meow!" << std::endl;
}


Cat::~Cat()
{
    delete brain;
    std::cout << "Cat this destructor called." << std::endl;
}