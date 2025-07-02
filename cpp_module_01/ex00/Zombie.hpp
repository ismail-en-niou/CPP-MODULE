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
        Zombie();
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

