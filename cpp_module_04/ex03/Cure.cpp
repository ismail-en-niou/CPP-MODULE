#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria()
{
    type = "Cure";
    std::cout << "Cure default constructor called." << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called." << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
    type = copy.type;
    std::cout << "Cure copy constructor called." << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
    AMateria::operator=(copy);
    if (this != &copy)
    {
		type = copy.type;
    }
	std::cout << "Cure assignment operator called." << std::endl;
	return (*this);
}

AMateria *Cure::clone() const 
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* shoots an Cure bolt at " << target.getName() << " *" << std::endl;
}