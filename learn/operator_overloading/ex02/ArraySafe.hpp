#ifndef ARRASAFE_HPP
#define ARRASAFE_HPP

class ArraySafe{
    private:
        int arra[10];
    public:
        ArraySafe();
        ~ArraySafe();
        int &operator[](int index);
};

#endif