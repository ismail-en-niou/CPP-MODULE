#pragma once

#include <string>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        std::string getType() const;
        virtual void	makeSound( void ) const = 0;
};