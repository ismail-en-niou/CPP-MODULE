#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap a("Warrior");
    ClapTrap b("Assassin");

    std::cout << "\n--- Initial Attacks ---\n";
    a.attack("Assassin");
    b.takeDamage(3);

    b.attack("Warrior");
    a.takeDamage(5);

    std::cout << "\n--- Repairs ---\n";
    a.beRepaired(2);
    b.beRepaired(4);
    std::cout << "\n--- More Attacks ---\n";
    for (int i = 0; i < 11; i++) { // test energy depletion
        a.attack("Assassin");
    }
    std::cout << "\n--- Lethal Damage ---\n";
    b.takeDamage(100);
    b.attack("Warrior");
    std::cout << "\n--- Copy & Assignment ---\n";
    ClapTrap c(a);
    ClapTrap d;
    d = b;
    std::cout << "\n--- End of Test ---\n";
    return 0;
}
