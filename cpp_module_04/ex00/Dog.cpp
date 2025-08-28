#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog this default constructor called " << std::endl;
}
Dog::Dog(const Dog &copy) 
{
    type = copy.type;
    std::cout << "Dog this copy constructor called " << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    std::cout << "Dog this assignment operator called." << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog this destructor called." << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
}