#include "Zombie.hpp"

int main(void )
{
    int n = 8;
    Zombie *Horde = zombieHorde(n, "name");
	std::string strings[8] = {"Kaii" ,"Noah" ,"Miaa" ,"Avaa" ,"Mila" ,"Aria" ,"Luna" ,"Luca"};
    for (int i = 0; i < n; i++)
    {
        Horde[i].setName(strings[i]);
        Horde[i].announce();
    }
    delete[] Horde;
    return 0;
}
