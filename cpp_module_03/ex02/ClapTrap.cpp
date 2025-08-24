#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap() :
    name("name"),
    hit_point(10), 
    eng_point(10), 
    attack_point(0) 
{
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) :
    name(name),
    hit_point(10), 
    eng_point(10), 
    attack_point(0) 
{
    std::cout << "ClapTrap "<<name << " constructor called"
              << std::endl;  
}

ClapTrap::ClapTrap(const ClapTrap &clap)
:   name(clap.name),
    hit_point(clap.hit_point),
    eng_point(clap.eng_point),
    attack_point(clap.attack_point)
{
    std::cout << "ClapTrap copy constructor called"
              << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called"
              << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (hit_point == 0)
    {
        std::cout << "ClapTrap" << target << "can't attack because he dont have a has no hit point" << std::endl;
        return;
    }
    if (eng_point == 0){
        std::cout << "ClapTrap" << target << "can't attack because he dont have a has no energy point" << std::endl;
        return;
    }
    eng_point--;
    std::cout << "ClapTrap "
                  << name
                  << " attacks "
                  << target
                  << ", causing "
                  << attack_point
                  << " points of damage!"
                  << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_point == 0)
    {
        std::cout << name
                  << " can't be repaired "
                  << "because it has no hit points."
                  << std::endl;
    }
    else if (eng_point == 0)
    {
        std::cout << name
                  << " can't be repaired "
                  << "because it has no energy points."
                  << std::endl;
    }
    else
    {
        eng_point--;
        hit_point += amount;
        std::cout << name
                  << " regained "
                  << amount
                  << " hit points. "
                  << "Now it has "
                  << hit_point
                  << " hit points!"
                  << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_point == 0)
    {
        std::cout << name 
                  << " Can't take damage, no hit points left."
                  << std::endl;
    }
    else if (amount >= hit_point)
    {
        hit_point = 0;
        std::cout << name
                  << " took "
                  << amount
                  << " points of damage. "
                  << "Now it has no hit points!"
                  << std::endl;
    }
    else
    {
        hit_point -= amount;
        std::cout << name
                  << " took "
                  << amount
                  << " points of damage. "
                  << "Now it has "
                  << hit_point
                  << " hit points!"
                  << std::endl;
    }
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
    if (this != &clap)
    {
        name = clap.name;
        hit_point = clap.hit_point;
        attack_point = clap.attack_point;
        eng_point = clap.eng_point;
    }
    std::cout << "ClapTrap " << name << " copy assignment operator called." << std::endl;
    return *this;
}