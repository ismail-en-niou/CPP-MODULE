#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

List_in *Character::droped = NULL;   

Character::Character() : name("no_name")
{
    for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character( const std::string& name ) : name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character named constructor called." << std::endl;
}

Character::Character( const Character& copy ) : name(copy.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.inventory[i])
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	std::cout << "Character copy constructor called." << std::endl;
}

Character&	Character::operator=( const Character& copy )
{
	if (this != &copy)
	{
		name = copy.name;
		for (int i = 0; i < 4; i++)
		{
			delete inventory[i];
			if (copy.inventory[i])
				inventory[i] = copy.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	std::cout << "Character assignment operator called." << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete inventory[i];
	}
	std::cout << "Character destructor called." << std::endl;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (!m)
		return;
	
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
	{
		List_in* new_node = new List_in;
		new_node->materia = inventory[idx];
		new_node->next = droped;
		droped = new_node;
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
	{
		inventory[idx]->use(target);
	}
}

void Character::cleanAll(void)
{
	List_in* current = droped;
	while (current)
	{
		List_in* next = current->next;
		delete current->materia;
		delete current;
		current = next;
	}
	droped = NULL;
}
