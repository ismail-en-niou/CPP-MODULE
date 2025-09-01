#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete j;
	std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl;
	delete i;
	
	std::cout << "------------------------------------------------" << std::endl;
	{
		Dog	d1;
			d1.setBrainIdea(0, "Catch the ball!");
		Dog	d2(d1);

		d1.setBrainIdea(0,"this a diff idea");
		
		d1.showBrainIdea(0);
		d2.showBrainIdea(0);
	}

	std::cout << "------------------------------------------------" << std::endl;

	Animal*	arr[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}

	std::cout << "------------------------------------------------" << std::endl;

	for (int i = 0; i < 4; i++)
		delete arr[i];
	return (0);
}