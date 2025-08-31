#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor called " << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat this copy constructor called " << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow! Meow!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat this destructor called." << std::endl;
}