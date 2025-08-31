#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        virtual void	makeSound( void ) const;
        void	setBrainIdea(int index, const std::string& idea);
		void	showBrainIdea(int index) const;
};
