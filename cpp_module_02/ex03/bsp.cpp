#include "Point.hpp"

bool is_inmidel(Point a , Point b , Point c , Point point)
{
    float areaABC = area(a, b, c);
    float areaPAB = area(point, a, b);
    float areaPBC = area(point, b, c);
    float areaPCA = area(point, c, a);
    float epsilon = 0.0001f;
    if (areaPAB < epsilon || areaPBC < epsilon || areaPCA < epsilon)
        return false;
    if (ft_fabs((areaPAB + areaPBC + areaPCA) - areaABC) < epsilon)
        return true;
    return false;
}

