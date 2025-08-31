#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>


AMateria::AMateria()
{
    std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "AMateria constructor called." << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called." << std::endl;
}

AMateria::AMateria(const AMateria &copy) : type(copy.type)
{
    std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy){
    if (this != &copy)
    {
        type = copy.type;
    }
    std::cout << "AMateria assignment operator called." << std::endl;
    return *this;   
}

std::string const &AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "Using " << type << " on " << target.getName() << std::endl;
}