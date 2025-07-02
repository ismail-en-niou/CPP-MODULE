#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>


class Zombie
{
    private:
        std::string name;
    public:
        void announce( void );
        Zombie* newZombie( std::string name );
        Zombie(std::string name);
        void    setName(std::string name);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
