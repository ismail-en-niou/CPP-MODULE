#include "Zombie.hpp"

void randomChump( std::string name)
{
    Zombie ne_zo = Zombie(name);
    ne_zo.announce();
}