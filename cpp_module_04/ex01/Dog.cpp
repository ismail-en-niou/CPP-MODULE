#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog default constructor called " << std::endl;
}
Dog::Dog(const Dog &copy) : Animal(copy)
{
    brain = new Brain(*copy.brain);
    std::cout << "Dog this copy constructor called " << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        type = copy.type;
        delete brain;
        brain = new Brain(*copy.brain);
    }
    std::cout << "Dog this assignment operator called." << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog this destructor called." << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
}

void	Dog::setBrainIdea(int index, const std::string& idea)
{
	brain->setIdea(index, idea);
}

void	Dog::showBrainIdea(int index) const
{
	std::cout << "Dog idea[" << index << "]: " << brain->getIdea(index) << std::endl;
}