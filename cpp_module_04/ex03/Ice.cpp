#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria()
{
    type = "ice";
    std::cout << "Ice default constructor called." << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called." << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
    type = copy.type;
    std::cout << "Ice copy constructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
    AMateria::operator=(copy);
    if (this != &copy)
		type = copy.type;
	std::cout << "Ice assignment operator called." << std::endl;
	return (*this);
}

AMateria *Ice::clone() const 
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}