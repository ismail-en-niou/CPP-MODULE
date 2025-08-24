#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

    class ClapTrap{
        private:
            std::string name;
            unsigned int hit_point;
            unsigned int eng_point;
            unsigned int attack_point;
        public:
            ClapTrap();
            ~ClapTrap();
            ClapTrap(const ClapTrap &clap);
            ClapTrap(std::string name);
            ClapTrap& operator=(const ClapTrap &clap);
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
    };
#endif