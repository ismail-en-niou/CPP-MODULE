#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(): FragTrap() , ScavTrap() ,name("NO_NAME")
{
    ClapTrap::name = name + "_clap_name";
    std::cout << "DiamonTrap " << name << " default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap() , ScavTrap() ,name(name)
{
    ClapTrap::name = name + "_clap_name";
    std::cout << "DiamonTrap " << name << " constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : FragTrap() , ScavTrap()
{
    this->name = copy.name;
    ClapTrap::name = name + "_clap_name";
    std::cout << "DiamonTrap " << name << " Copy Constructror called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
    if (this != &copy)
    {
        name = copy.name;
        ClapTrap::name = copy.ClapTrap::name;
        hit_point = copy.hit_point;
        eng_point = copy.eng_point;
        attack_point = copy.attack_point;
        std::cout << "DiamonTrap " << name << " copy assignment operator called." << std::endl;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamonTrap " << name << " destructor called." << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " 
    << name
    << " and my clapTrap name is"
    << ClapTrap::name
    << std::endl;
}

int DiamondTrap::get_hit_points()
{
    return hit_point;
}

int DiamondTrap::get_energy_points()
{
    return eng_point;
}

int DiamondTrap::get_attack_damage()
{
    return attack_point;
}