#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point{
    private:
        const Fixed x , y;
    public:
        Point();
        Point(Fixed x , Fixed y);
        ~Point();
        Point(Point const &point);
        Point &operator=(const Point &point);
        Fixed getX();
        Fixed getY();
};

float   area(Point a , Point b , Point c);
bool is_inmidel(Point a , Point b , Point c , Point point);
float ft_fabs(float a);
#endif