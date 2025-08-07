#include "Point.hpp"
#include <iostream>


int main(int argc, char const *argv[])
{
    Point a(3,2);
    Point b(6,2);
    Point c = a + b;
    std::cout << c.getX() << std::endl;
    return 0;
}
