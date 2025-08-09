#include <iostream>
#include "Point.hpp"


int main() {
    // Triangle vertices
    Point A(0.0f, 0.0f);
    Point B(5.0f, 0.0f);
    Point C(0.0f, 5.0f);

    // Test points
    Point P1(2.0f, 1.0f); // inside
    Point P2(5.0f, 5.0f); // outside
    Point P3(2.5f, 2.5f); // inside
    Point P4(0.0f, 0.0f); // on vertex

    std::cout << "P1 inside? " << (is_inmidel(A, B, C, P1) ? "Yes" : "No") << "\n";
    std::cout << "P2 inside? " << (is_inmidel(A, B, C, P2) ? "Yes" : "No") << "\n";
    std::cout << "P3 inside? " << (is_inmidel(A, B, C, P3) ? "Yes" : "No") << "\n";
    std::cout << "P4 inside? " << (is_inmidel(A, B, C, P4) ? "Yes" : "No") << "\n";

    return 0;
}