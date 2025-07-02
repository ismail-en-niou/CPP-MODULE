#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>

class HumanB
{
    private:
        std::string name;
    public:
        HumanB();
        ~HumanB();
        attack();
};

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

#endif