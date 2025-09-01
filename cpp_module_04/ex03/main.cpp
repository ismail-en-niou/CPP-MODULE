#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    std::cout << "~~~~~~-------~~~~~~~~" << std::endl;
    Cure cure1;
    Cure cure2 = cure1;
    cure2.getType();
    std::cout << "~~~~~~~------~~~~~~~" << std::endl;

    AMateria* tmp = NULL;
    src->learnMateria(new Cure());
    src->createMateria("Cure");
    std::cout << "~~~~~~~2~~~~~~~" << std::endl;
    me->equip(tmp);
    me->unequip(0);
    std::cout << "~~~~~~~2~~~~~~~" << std::endl;

    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(4, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    Character::cleanAll();
    
    return 0;
}