#pragma once

#include "AMateria.hpp"
#include <string>

class IMateriaSource {
    public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
    private:
        AMateria* materias[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& copy);
        MateriaSource& operator=(const MateriaSource& copy);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};