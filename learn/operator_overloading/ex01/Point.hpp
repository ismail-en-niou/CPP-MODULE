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
        Point &operator+(Point &p);
        Point &operator>>(Point &p);
        friend std::ostream& operator<<(std::ostream& out, const Point& p);
        friend std::istream& operator>>(std::istream& in, Point& p);
        void setX(int x);
        void setY(int y);
        int getY();
        int getX();
};


#endif