#include "Point.hpp"
#include <iostream>
#include <ostream>

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

std::ostream &operator<<(std::ostream &out , const Point &p)
{
    out << "( " << p.x << " , " << p.y << " )";
    return out;
}

void Point::setX(int x)
{
    this->x = x;
}

void Point::setY(int y)
{
    this->y = y;
}

std::istream& operator>>(std::istream& in, Point& p) {
    std::cout << "Enter x: ";
    in >> p.x;
    std::cout << "Enter y: ";
    in >> p.y;
    return in;
}