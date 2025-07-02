#include "Zombie.hpp"

int main(void)
{
    Zombie *zom1 = newZombie("zombie 1");
    zom1->announce();

    randomChump("Zombie 2");
    delete(zom1);
}
