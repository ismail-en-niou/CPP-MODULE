#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Animal")
{
    std::cout << "Animal this default constructor called " << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
    std::cout << "Animal this copy constructor called " << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    std::cout << "Animal this assignment operator called." << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal this destructor called." << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal makes a sound." << std::endl;
}

std::string Animal::getType() const
{
    return type;
}