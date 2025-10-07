#include "Point.hpp"

Point::Point(Point const &point) : x(point.x), y(point.y) {}

Fixed Point::getX()
{
    return this->x;
}

Fixed Point::getY()
{
    return this->y;
}

float ft_fabs(float a)
{
    return (a > 0 ? a : -a);
}

Point::Point() :x(0) , y(0){}

Point::Point(Fixed x , Fixed y) : x(x) , y(y) {}

float area(Point a, Point b, Point c)
{
    float ar = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
                b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
                c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) /
               2.0f;
    return (ft_fabs(ar));
}

Point::~Point(){}