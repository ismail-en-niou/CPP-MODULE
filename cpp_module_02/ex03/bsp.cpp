#include "Point.hpp"

bool is_inmidel(Point a , Point b , Point c , Point point)
{
    float Total = area(a , b ,c);
    float ar1 = area(a , b , point);
    float ar2 = area(c , b , point);
    float ar3 = area(a , c , point);

    return (Total == (ar1 + ar2 + ar3));
}