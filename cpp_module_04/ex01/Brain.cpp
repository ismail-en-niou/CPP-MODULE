#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
	std::cout << "Brain default constructor called." << std::endl;  
}

Brain::Brain( const Brain& copy )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain&	Brain::operator=( const Brain& copy )
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = copy.ideas[i];
	}
	std::cout << "Brain assignment operator called." << std::endl;
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called." << std::endl;
}

void	Brain::setIdea(int index, const std::string& idea)
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Index out of bounds!" << std::endl;
		return ;
	}
	ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Index out of bounds!" << std::endl;
		return ("");
	}
	return (ideas[index]);
}