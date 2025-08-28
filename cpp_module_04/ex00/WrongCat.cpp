#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat this default constructor called " << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy)
{
    type = copy.type;
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