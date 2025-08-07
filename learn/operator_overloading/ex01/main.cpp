#include "Point.hpp"
#include <iostream>


int main()
{
    Point a(3,2);
    Point b(6,2);
    Point c = a + b;
    std::cin >> c;
    std::cout << c << std::endl; 
    std::cout << c.getX() << std::endl;
    return 0;
}
