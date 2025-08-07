#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point
{
    private:
        int x , y;
    public:
        Point();
        ~Point();
        Point(int x , int y);
        // Point &operator+(Point &p);
        int getY();
        int getX();
};


#endif