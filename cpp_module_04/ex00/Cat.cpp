#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    type = "cat";
    std::cout << "Cat this default constructor called " << std::endl;
}
Cat::Cat(const Cat &copy)
{
    type = copy.type;
    std::cout << "Cat this copy constructor called " << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow! Meow!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat this destructor called." << std::endl;
}