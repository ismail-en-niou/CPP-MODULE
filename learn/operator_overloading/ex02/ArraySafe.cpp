#include "ArraySafe.hpp"
#include <iostream>

ArraySafe::ArraySafe(){
    for (int i = 0 ; i < 10 ; i++)
        this->arra[i] = i;
}

ArraySafe::~ArraySafe(){}

int &ArraySafe::operator[](int index)
{
    if (index < 0 || index > 10)
    {
        std::cerr << "The index out of Bounds" << std::endl;
    }
    return this->arra[index];
}