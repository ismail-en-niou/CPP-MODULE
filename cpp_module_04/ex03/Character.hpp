#pragma once

#include "ICharacter.hpp"
#include <string>

class AMateria;

typedef struct List{
    AMateria *materia;
    struct List *next;
}List_in;


class Character : public ICharacter{
    private:
        std::string name;
        AMateria *inventory[4];
        static List_in *droped;
    public :
        Character();
        Character(const Character &copy);
        Character(const std::string &name);
        ~Character();
        Character &operator=(const Character &copy);
        std::string const & getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        static void cleanAll(void);
};