#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(ScavTrap &scav);
        ScavTrap &operator=(const ScavTrap &scav);
        void attack(const std::string& target);
        void guardGate();
        ~ScavTrap();
};

