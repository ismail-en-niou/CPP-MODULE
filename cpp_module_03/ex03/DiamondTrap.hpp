#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string _name);
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap &operator=(const DiamondTrap &copy);
        ~DiamondTrap(void);
        void attack(const std::string &target);
        void whoAmI(void);
        int get_hit_points(void);
        int get_energy_points();
        int get_attack_damage();
};
