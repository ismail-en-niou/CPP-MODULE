#include <iostream>
#include "ArraySafe.hpp"
int main()
{
    std::cout << "hello " << std::endl;
    ArraySafe arr;
    std::cout << arr[11] << std::endl;
    return 0;
}
