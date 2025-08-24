#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void)
{
    name = "NO_NAME";
    hit_point = 100;
    eng_point = 50;
    attack_point = 20;
    std::cout << "ScavTrap " << name << " default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hit_point = 100;
    eng_point = 50;
    attack_point = 20;
    std::cout << "ScavTrap " << name << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &scav) : ClapTrap(scav)
{
    name = scav.name;
    hit_point = scav.hit_point;
    eng_point = scav.eng_point;
    attack_point = scav.attack_point;
    std::cout << "ScavTrap" << name << "Copy Constructror called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    ClapTrap::operator=(copy);
    std::cout << "ScavTrap " << name << " copy assignment operator called." << std::endl;
    return *this;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << name << " destructor called." << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (!hit_point || !eng_point)
	{
		std::cout << "ScavTrap " << name << " can't attack (no energy or hit point)." << std::endl;
		return ;
	}
	eng_point--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_point <<" points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}