#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        getType() const;
        setType(const std::string type);
        Weapon();
        ~Weapon();
};

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

#endif