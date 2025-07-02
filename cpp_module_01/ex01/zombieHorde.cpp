#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
	{
		std::cout << "can't allocate this number" << std::endl;
		return (NULL);
	}
    Zombie *zom = new Zombie[N];
    for (int i = 0 ; i < N ; i++)
    {
        zom[i].setName(name);
    }
    return zom;
}