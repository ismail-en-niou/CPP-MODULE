#include "Harl.hpp"
#include <iostream>


int main(int ac, char const *av[])
{
    Harl harl;
    if (ac != 2)
        return 1;
    std::string  levels[4] = {"DEBUG" , "INFO" , "WARNING" , "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (levels[i] == av[1])
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
    }
    return 0;
}
