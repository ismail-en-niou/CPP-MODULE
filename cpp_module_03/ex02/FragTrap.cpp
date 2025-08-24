#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "NO_NAME";
    hit_point = 100;
    eng_point= 100;
    attack_point = 30;
    std::cout << "Fragtrap " << name << " default constactor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hit_point = 100;
    eng_point= 100;
    attack_point = 30;
    std::cout << "Fragtrap " << name << " constactor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "Fragtrap " << name << "Copy Constructror called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
    {
        name = copy.name;
        hit_point = copy.hit_point;
        eng_point = copy.eng_point;
        attack_point = copy.attack_point;
        std::cout << "Fragtrap " << name << " copy assignment operator called." << std::endl;
    }
    return (*this);
}


FragTrap::~FragTrap()
{
    std::cout << "Fragtrap " << name << " destructor called." << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}