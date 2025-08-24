#include "ClapTrap.hpp"
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    {
        ClapTrap ct1("ct1");

        std::cout << "----------------------------------" << std::endl;
        ct1.attack("ct2");
        std::cout << "----------------------------------" << std::endl;
        ct1.beRepaired(2);
        std::cout << "----------------------------------" << std::endl;
        ct1.takeDamage(10);
        ct1.takeDamage(2);
        std::cout << "----------------------------------" << std::endl;
        ct1.takeDamage(69);
        std::cout << "----------------------------------" << std::endl;
        ct1.attack("some target");
        std::cout << "----------------------------------" << std::endl;
        ct1.beRepaired(69);
        std::cout << "----------------------------------" << std::endl;
    }
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
    {
        std::cout << std::endl;
        ScavTrap st1("st1");

        std::cout << "----------------------------------" << std::endl;
        st1.guardGate();
        std::cout << "----------------------------------" << std::endl;
        st1.attack("st2");
        std::cout << "----------------------------------" << std::endl;
        st1.beRepaired(2);
        std::cout << "----------------------------------" << std::endl;
        st1.takeDamage(100);
        st1.takeDamage(2);
        std::cout << "----------------------------------" << std::endl;
        st1.takeDamage(69);
        std::cout << "----------------------------------" << std::endl;
        st1.attack("some target");
        std::cout << "----------------------------------" << std::endl;
        st1.beRepaired(69);
        std::cout << "----------------------------------" << std::endl;
        st1.guardGate();
        std::cout << "----------------------------------" << std::endl;
    }
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
    {
        FragTrap ft1("ft1");

        std::cout << "----------------------------------" << std::endl;
        ft1.highFivesGuys();
        std::cout << "----------------------------------" << std::endl;
        ft1.attack("ft2");
        std::cout << "----------------------------------" << std::endl;
        ft1.beRepaired(2);
        std::cout << "----------------------------------" << std::endl;
        ft1.takeDamage(100);
        ft1.takeDamage(2);
        std::cout << "----------------------------------" << std::endl;
        ft1.takeDamage(69);
        std::cout << "----------------------------------" << std::endl;
        ft1.attack("some target");
        std::cout << "----------------------------------" << std::endl;
        ft1.beRepaired(69);
        std::cout << "----------------------------------" << std::endl;
        ft1.highFivesGuys();
        std::cout << "----------------------------------" << std::endl;
    }
    {
        DiamondTrap diamond("dt1");
        std::cout << "----------------------------------" << std::endl;
        diamond.whoAmI();
        std::cout << "----------------------------------" << std::endl;
        std::cout << "HitPoints is: " << diamond.get_hit_points() << std::endl;
        std::cout << "EnergyPoints is: " << diamond.get_energy_points() << std::endl;
        std::cout << "AttackDamage is: " << diamond.get_attack_damage() << std::endl;
        std::cout << "----------------------------------" << std::endl;
        diamond.attack("dt2");
        std::cout << "----------------------------------" << std::endl;
        diamond.guardGate();
        std::cout << "----------------------------------" << std::endl;
        diamond.highFivesGuys();
        std::cout << "----------------------------------" << std::endl;
        diamond.takeDamage(20);
        std::cout << "----------------------------------" << std::endl;
        diamond.beRepaired(10);
        std::cout << "----------------------------------" << std::endl;
    }
    return (0);
}
