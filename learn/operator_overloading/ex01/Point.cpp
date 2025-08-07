#include "Point.hpp"
#include <iostream>

Point::Point()
{
    std::cout << "Default constractor " << std::endl;
}

Point::Point(int x , int y) : x(x) , y(y) {}

int Point::getX()
{
    return this->x;
}

int Point::getY()
{
    return this->y;
}

Point &Point::operator+(Point &p)
{
    if (this != &p)
    {
        this->x = this->x + p.getX();
        this->y = this->y + p.getY();
    }
    return *this;
}

Point::~Point(){}