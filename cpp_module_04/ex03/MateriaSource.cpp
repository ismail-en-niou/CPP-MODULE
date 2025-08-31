#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
    std::cout << "MateriaSource default constructor called." << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete materias[i];
    }
    std::cout << "MateriaSource destructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy.materias[i])
            materias[i] = copy.materias[i]->clone();
        else
            materias[i] = NULL;
    }
    std::cout << "MateriaSource copy constructor called." << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++)
        {
            delete materias[i];
            if (copy.materias[i])
                materias[i] = copy.materias[i]->clone();
            else
                materias[i] = NULL;
        }
    }
    std::cout << "MateriaSource assignment operator called." << std::endl;
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    
    for (int i = 0; i < 4; i++)
    {
        if (!materias[i])
        {
            materias[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] && materias[i]->getType() == type)
        {
            return materias[i]->clone();
        }
    }
    return NULL;
}
